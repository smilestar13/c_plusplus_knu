//
// Created by Borys Oleksiienko on 09.09.2023.
//
#include <iostream>

using namespace std;

int main() {
    float K, P, T;
    cout << "WARN: This program work only with int and float type.\n"
            "\tIf you enter a different type of data,\n"
            "\tthe behavior of the program may be unpredictable,\n"
            "\tthe responsibility for this factor rests with you.\n\n";
    cout << "Enter K value: ";
    cin >> K;
    cout << "Enter P value: ";
    cin >> P;
    cout << "Enter T value: ";
    cin >> T;

    float temp = K;
    K = T;
    T = P;
    P = temp;

    cout << "\nNew K value is " << K << endl;
    cout << "New P value is " << P << endl;
    cout << "New T value is " << T << endl;

    return 0;
}
