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
        throw domain_error("Logarithm is not defined for non-positive values.");
    }
    double term = (x - 1) / x;
    double sum = term;
    int n = 2;

    while (abs(term) > epsilon) {
        term *= -1 * (x - 1) / x * (n - 1) / n;
        sum += term;
        ++n;
    }
    return sum;
}

// Допоміжна функція для рекурсивного виклику
double recursive_ln_helper(double x, int n, double term, double epsilon) {
    if (std::abs(term) < epsilon) {
        return 0; // Якщо терм меньше за епсілон, повертаємо 0
    }
    return term + recursive_ln_helper(x, n + 1, -term * (x - 1) / n * (n - 1) / (n + 1), epsilon);
}

// Рекурсивна функція для обчислення ln(x)
double recursive_ln(double x, double epsilon = 1e-6) {
    if (x <= 0.0) {
        throw domain_error("Logarithm is not defined for non-positive values.");
    }
    return recursive_ln_helper(x, 2, (x - 1) / x, epsilon);
}

void tabulate_ln(double a, double b, int n) {
    if (n <= 0 || b <= a) {
        throw invalid_argument("Invalid range or number of points for tabulation.");
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
    cout << "Enter the interval for tabulation [a;b] and the number of intervals n: " << endl;
    cout << "Start of interval = "; cin >> a;
    cout << "End of interval = "; cin >> b;
    cout << "Number of intervals = "; cin >> n;

    try {
        tabulate_ln(a, b, n);
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}