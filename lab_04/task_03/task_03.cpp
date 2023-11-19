//
// Created by Borys Oleksiienko on 12.11.2023.
//

#include <iostream>

using namespace std;

int main() {
    double A;
    int N;
    cout << "Enter a real number A: ";
    cin >> A;
    cout << "Enter a positive integer N (> 0): ";
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

    cout << "The value of the expression for A = " << A << " and N = " << N << " is " << sum << endl;
    return 0;
}

