//
// Created by Borys Oleksiienko on 12.11.2023.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B;
    cout << "Введіть два числа A та B (A < B): ";
    cin >> A >> B;

    double sum = 0.0;
    for (int i = A; i <= B; ++i) {
        sum += sqrt(i);
    }

    cout << "Сума квадратних коренів всіх цілих чисел на проміжку від " << A << " до " << B << " включно дорівнює "
         << sum << endl;
    return 0;
}