//
// Created by Borys Oleksiienko on 23.10.2023.
//

//Дано ціле число N (N > 1). Послідовність чисел Фібоначчі Fk визначається
//наступним чином: F1 = 1, F2 = 1, Fk = Fk−2 + Fk−1, де k = 3, 4, ....
//Перевірити, чи є число N числом Фібоначчі. Якщо є, то вивести True, якщо ні
//- вивести False.

#include <iostream>
using namespace std;

bool isFibonacci(int N) {
    int a = 1, b = 1, c;

    while (b < N) {
        c = a + b;
        a = b;
        b = c;
    }

    return b == N;
}

int main() {
    int N;
    cout << "Введіть ціле число N: ";
    cin >> N;

    if (N <= 1) {
        cout << "Число має бути > 1" << endl;
    } else {
        bool result = isFibonacci(N);

        if (result) {
            cout << "True: " << N << " є числом Фібоначчі." << endl;
        } else {
            cout << "False: " << N << " не є числом Фібоначчі." << endl;
        }
    }

    return 0;
}