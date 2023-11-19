//
// Created by Borys Oleksiienko on 12.11.2023.
//

#include <iostream>

using namespace std;

int main() {
    int N, square = 0;
    cout << "Введіть ціле число N (> 0): ";
    cin >> N;

    for(int i = 1; i <= 2 * N - 1; i += 2) {
        square += i;
        cout << "Поточне значення суми " << i << ": " << square << endl;
    }

    cout << "Квадратне значення N " << N << " це " << square << endl;
    return 0;
}

