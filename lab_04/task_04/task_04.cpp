//
// Created by Borys Oleksiienko on 12.11.2023.
//

#include <iostream>

using namespace std;

int main() {
    double X;
    int N;
    cout << "Введіть дійсне число X (|X| < 1): ";
    cin >> X;
    cout << "Введіть ціле число N (> 0): ";
    cin >> N;

    double sum = X;
    double term = X;

    for(int i = 1; i <= N; ++i) {
        term *= -X * X;
        sum += term / (2 * i + 1);
    }

    cout << "Отримане число = " << sum << endl;
    return 0;
}
