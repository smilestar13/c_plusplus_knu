//
// Created by Borys Oleksiienko on 23.09.2023.
//

#include <iostream>

using namespace std;

int main() {
    float A, B, C, temp_A, temp_B;

    cout << "Введіть значення А: ";
    cin >> A;
    cout << "Введіть значення B: ";
    cin >> B;
    cout << "Введіть значення C: ";
    cin >> C;

    if (A > 0 && B > 0 && C > 0) {
        temp_A = A;
        temp_B = B;

        A = C + B;
        B = temp_A + C;
        C = temp_A + temp_B;
    } else {
        A *= A;
        B *= B;
        C *= C;
    }

    cout << "A = "<< A <<"; B = "<< B <<"; C = "<< C <<";" << endl;
    return 0;
}