//
// Created by Borys Oleksiienko on 02.12.2023.
//

#include <iostream>

using namespace std;

bool isDiv3(int K) {
    int sum = 0;
    while (K > 0) {
        sum += K % 10;
        K /= 10;
    }
    return (sum % 3 == 0);
}

int main() {
    int count = 0, number;

    cout << "Введіть 10 цілих додаткових чисел:" << endl;
    for (int i = 0, x = 1; i < 10; i++, x++) {
        cout << x << ") ";
        cin >> number;
        if (number > 0 && isDiv3(number)) {
            count++;
        }
    }

    cout << "Кількість чисел що ділиться на 3: " << count << endl;

    return 0;
}
