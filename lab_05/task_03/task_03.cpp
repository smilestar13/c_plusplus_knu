//
// Created by Borys Oleksiienko on 02.12.2023.
//

#include <iostream>

using namespace std;

void digCounts(int K, int &even, int &odd) {
    even = 0;
    odd = 0;
    while (K > 0) {
        int digit = K % 10;
        if (digit % 2 == 0) {
            even++;
        } else {
            odd++;
        }
        K /= 10;
    }
}

//void digCounts(int K, int *even, int *odd) {
//    *even = 0;
//    *odd = 0;
//    while (K > 0) {
//        int digit = K % 10;
//        if (digit % 2 == 0) {
//            (*even)++;
//        } else {
//            (*odd)++;
//        }
//        K /= 10;
//    }
//}

int main() {
    for (int i = 0; i < 5; i++) {
        int K, even, odd;
        cout << "Введіть додатнє ціле число: ";
        cin >> K;

        digCounts(K, even, odd);

        cout << "Кількість парних цифр: " << even << endl;
        cout << "Кількість не парних цифр: " << odd << endl;
    }
    return 0;
}

//int main() {
//    for (int i = 0; i < 5; i++) {
//        int K, even, odd;
//        cout << "Введіть додатнє ціле число: ";
//        cin >> K;
//
//        digCounts(K, &even, &odd);
//
//        cout << "Кількість парних цифр: " << even << endl;
//        cout << "Кількість не парних цифр: " << odd << endl;
//    }
//
//    return 0;
//}

