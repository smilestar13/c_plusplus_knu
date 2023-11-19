//
// Created by Borys Oleksiienko on 12.11.2023.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Enter a positive integer N (> 2): ";
    cin >> N;

    if (N > 1000) {
        cout << "N is too large for the static array." << endl;
        return 1;
    }

    int A[1001];

    A[1] = 1;
    A[2] = 2;
    A[3] = 3;

    for (int K = 4; K <= N; ++K) {
        A[K] = A[K - 1] + A[K - 2] - 2 * A[K - 3];
    }

    for (int i = 1; i <= N; ++i) {
        cout << "A" << i << " = " << A[i] << endl;
    }

    return 0;
}
