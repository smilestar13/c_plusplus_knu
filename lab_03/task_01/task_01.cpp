//
// Created by Borys Oleksiienko on 23.10.2023.
//

//Дано додатні числа A і B (A > B). На відрізку довжиною A розмістити
//максимально можливу кількість відрізків довжиною B (без накладання). Не
//використовуючи операції множення і ділення, знайти довжину незайнятої
//частини відрізка A.

#include <iostream>

using namespace std;

int main () {
    int A, B, i = 0;
    cout << "Введіть значення А: ";
    cin >> A;
    cout << "Введіть значення B: ";
    cin >> B;

    while (A >= B) {
        A = A - B;
        i += 1;
    }

    cout << "Кількість відрізків В, що вміщує в собі А = " << i;
    cout << "\nДовжина незайнятої частини відрізка А = " << A << endl;

    return 0;
}