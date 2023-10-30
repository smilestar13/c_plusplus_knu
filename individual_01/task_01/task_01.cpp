//
// Created by Borys Oleksiienko on 29.10.2023.
//

#include <iostream>
#include <fstream>

using namespace std;

double function_x(double xn) {
    return 7 - xn - 6 / xn;
}

double right_rectangle_method(double a, double b, int n) {
    double h = (b - a) / n;
    double integral = 0.0;

    for (int i = 0; i < n; i++) {
        double x_right = a + (i + 1) * h;
        integral += function_x(x_right);
    }

    return integral * h;
}

int main() {
    double a = 1.0;  // Початок інтервалу
    double b = 6.0;  // Кінець інтервалу
    int n_max; // Максимальна кількість інтервалів

    cout << "Введіть кількість інтервалів кратну 10: "; // Змінюємо початкову кількість інтервалів на власну
    cin >> n_max;

    cout << "\nПідінтегральна функція: y = 7 - x - 6 / x" << endl;
    cout << "\nПроміжок: [" << a << ", " << b << "]" << endl;
    cout << "\nТочне значення інтегралу: 6.74944318463167\n" << endl;

    ofstream fout("outOleksiienko.txt");

    fout << "Підінтегральна функція: y = 7 - x - 6 / x" << endl;
    fout << "\nПроміжок: [" << a << ", " << b << "]" << endl;
    fout << "\nТочне значення інтегралу: 6.74944318463167\n" << endl;

    for (int n = 10; n <= n_max; n += 10) {
        double result = right_rectangle_method(a, b, n);
        double exact_value = 6.74944318463167;
        double error = exact_value - result;

        cout << "n=" << n << "\t\t" << result << "\t\t" << error << endl;
        fout << "n=" << n << "\t\t" << result << "\t\t" << error << endl;
    }

    fout.close();

    return 0;
}