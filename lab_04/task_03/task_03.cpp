//
// Created by Borys Oleksiienko on 12.11.2023.
//

#include <iostream>

using namespace std;

int main() {
    double A;
    int N;
    cout << "Введіть значення A: ";
    cin >> A;
    cout << "Введіть значення N (> 0): ";
    cin >> N;

    double sum = 1.0;
    double term = 1.0;

    for(int i = 1; i <= 2 * N; i += 2) {
        term *= A * A;
        if((i / 2) % 2 == 0) {
            sum -= term;
        } else {
            sum += term;
        }
    }

    cout << "Значение виразу для A = " << A << " та N = " << N << " це " << sum << endl;
    return 0;
}

