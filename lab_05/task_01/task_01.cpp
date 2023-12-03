//
// Created by Borys Oleksiienko on 02.12.2023.
//

#include <iostream>

using namespace std;

float calc(float A, float B, int Op) {
    switch (Op) {
        case 1:
            return A - B;
        case 2:
            return A * B;
        case 3:
            return A / B;
        default:
            return A + B;
    }
}

int main() {
    float A, B;
    int choice;

    cout << "Введіть значення А: ";
    cin >> A;
    cout << "Введіть значення В: ";
    cin >> B;
    if (A == 0 || B == 0) {
        cout << "Помилка: A та B не можуть бути 0." << endl;
        return 0;
    } else {
        cout << "Введіть номер операції (№1 - віднімання, №2 - множення, №3 - ділення): ";
        cin >> choice;

        cout << "Результат операції №" << choice << ": " << calc(A, B, choice) << endl;
        return 0;
    }
}
