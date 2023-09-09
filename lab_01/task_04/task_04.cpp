//
// Created by Borys Oleksiienko on 09.09.2023.
//
#include <iostream>

using namespace std;

int main() {
    int x;
    cout << "Enter a three-digit number: ";
    cin >> x;
    int num_1, num_2, num_3;
    num_1 = x % 10;
    x = x / 10;
    num_2 = x % 10;
    x = x / 10;
    num_3 = x;

    cout << num_1 << num_2 << num_3 << endl;

    return 0;
}