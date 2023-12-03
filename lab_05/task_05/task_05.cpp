//
// Created by Borys Oleksiienko on 02.12.2023.
//

#include <iostream>
#include <cmath>

using namespace std;

// Функція для char
double distanceFromOrigin(char x, char y) {
    return sqrt(x * x + y * y);
}

// Функція для long
double distanceFromOrigin(long x, long y) {
    return sqrt(x * x + y * y);
}

// Функція з параметром за замовчанням
double distanceFromOrigin(double x, double y = 0) {
    return sqrt(x * x + y * y);
}

// Функція-шаблон
template <class T>
double distanceFromOrigin(T x, T y) {
    return sqrt(x * x + y * y);
}

int main() {
    cout << "Distance (char): " << distanceFromOrigin(char(3), char(4)) << endl;
    cout << "Distance (long): " << distanceFromOrigin(long(5), long(12)) << endl;
    cout << "Distance (double): " << distanceFromOrigin(3.0, 4.0) << endl;
    cout << "Distance (default param): " << distanceFromOrigin(5.0) << endl;

    // Шаблонні функції
    cout << "Distance (template, int): " << distanceFromOrigin<int>(3, 4) << endl;
    cout << "Distance (template, double): " << distanceFromOrigin<double>(3.0, 4.0) << endl;

    return 0;
}
