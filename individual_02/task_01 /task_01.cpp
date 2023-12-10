//
// Created by Borys Oleksiienko on 03.12.2023.
//

#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdexcept>

using namespace std;

// Оголошуємо тип покажчика на функцію для ln
typedef double (*LogFunction)(double, double);

// Ітеративна функція для обчислення ln(x)
double taylor_ln(double x, double epsilon = 1e-6) {
    if (x <= 0.0) {
        throw domain_error("Логарифм не визначений для недодатних значень.");
    }
    double term = (x - 1);
    double sum = term;
    int n = 2;

    while (abs(term) > epsilon) {
        term = -term * (x - 1) / n;
        sum += term;
        ++n;
    }
    return sum;
}

// Допоміжна функція для рекурсивного виклику
double recursive_ln_helper(double x, int n, double term, double epsilon) {
    if (abs(term) < epsilon) {
        return 0;
    }
    term = -term * (x - 1) / n;
    return term + recursive_ln_helper(x, n + 1, term, epsilon);
}

// Рекурсивна функція для вирахування ln(x)
double recursive_ln(double x, double epsilon = 1e-6) {
    if (x <= 0.0) {
        throw domain_error("Логарифм не визначений для недодатних значень.");
    }
    double term = (x - 1);
    return term + recursive_ln_helper(x, 2, term, epsilon);
}


void tabulate_ln(double a, double b, int n) {
    if (n <= 0 || b <= a) {
        throw invalid_argument("Недійсний діапазон!");
    }

    double dx = (b - a) / n;
    double x = a;

    cout << fixed << setprecision(6);
    cout << "X\t\t\tIterative ln(x)\t\tStandard log(x)\t\tRecursive ln(x)\n";

    while (x <= b) {
        cout << x << "\t\t"
             << taylor_ln(x) << "\t\t"
             << log(x) << "\t\t"
             << recursive_ln(x) << '\n';
        x += dx;
    }
}

int main() {
    double a, b;
    int n;
    cout << "Введіть інтервал для табуляції [a;b] та кількість інтервалів n: " << endl;
    cout << "Старт інтервала = "; cin >> a;
    cout << "Кінець інтервала = "; cin >> b;
    cout << "Кількість інтервалів = "; cin >> n;

    try {
        tabulate_ln(a, b, n);
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}