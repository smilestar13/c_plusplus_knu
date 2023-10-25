//
// Created by Borys Oleksiienko on 23.10.2023.
//

//Дано ціле число N (N > 0). Використовуючи операції ділення і остачі від
//ділення, знайти число, отримане при читанні числа N справа наліво.

#include <iostream>

using namespace std;

int main () {
    int N, reversed = 0;

    cout << "Введіть значення N: ";
    cin >> N;

    while (N > 0) {
        int lastDigit = N % 10;
        reversed = reversed * 10 + lastDigit;
        N /= 10;
    }
    cout << "Ваше число навпаки дорівнює: " << reversed << endl;

    return 0;
}