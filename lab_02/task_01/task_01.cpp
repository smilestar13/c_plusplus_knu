//
// Created by Borys Oleksiienko on 23.09.2023.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, x, b, y;
    cout << "Введіть значення 'a': ";
    cin >> a;
    cout << "Введіть значення 'x': ";
    cin >> x;
    cout << "Введіть значення 'b': ";
    cin >> b;

    if (a <= x && x <= b) {
        y = (2 - x) / (sqrt(abs(x + 1)));
    } else {
        y = pow(10, 7) * sin(pow(a * x, 5));
    }

    cout << "\nВідповідь: " << y << endl;

    return 0;
}

