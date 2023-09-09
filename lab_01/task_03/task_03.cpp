//
// Created by Borys Oleksiienko on 09.09.2023.
//
#include <iostream>

using namespace std;

int main() {
    int K, P, T;
    cout << "Enter K value: ";
    cin >> K;
    cout << "Enter P value: ";
    cin >> P;
    cout << "Enter T value: ";
    cin >> T;

    int temp = K;
    K = T;
    T = P;
    P = temp;

    cout << "\nNew K value is " << K << endl;
    cout << "New P value is " << P << endl;
    cout << "New T value is " << T << endl;

    return 0;
}
