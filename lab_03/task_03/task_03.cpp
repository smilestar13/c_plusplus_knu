//
// Created by Borys Oleksiienko on 23.10.2023.
//

//Дано число A (А > 1). Вивести найбільше із цілих чисел K, для яких сума 1/2
//+ 2/3 + ... + К/(K+1) буде менше A, і саму цю суму.

#include <iostream>

using namespace std;

int main () {
    int K = 1, A;
    double sum = 0.0, step = 0.0;

    cout << "Введіть значення А: ";
    cin >> A;


    while (A > sum) {
        step = static_cast<double>(K) / (K + 1);
        sum += step;
        K += 1;
    }

    cout << "K: " << K - 1 << endl;
    cout << "Сума: " << sum - step << endl;

    return 0;
}