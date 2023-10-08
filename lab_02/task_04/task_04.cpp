//
// Created by Borys Oleksiienko on 23.09.2023.
//

#include <iostream>

using namespace std;

int main() {
    float data;
    short int num;
    cout << "Оберіть одиницю вимірювання за номером (1 - тонна, 2 - центнер 3 -\n"
            "кілограм, 4 - грам, 5 - міліграм): ";
    cin >> num;
    cout << "Введіть значення в обранній одиниці вимірювання: ";
    cin >> data;

    switch (num) {
        case 1: cout << data * 10 << " (ц) \n" << data * 1000 << " (кг)\n" << data * 1000000 << " (г)\n" << data * 1000000000 << " (мг)" << endl; break;
        case 2: cout << data * 0.1 << " (т) \n" << data * 100 << " (кг)\n" << data * 100000 << " (г)\n" << data * 100000000 << " (мг)" << endl; break;
        case 3: cout << data * 0.001 << " (т) \n" << data * 0.01 << " (ц)\n" << data * 1000 << " (г)\n" << data * 1000000 << " (мг)" << endl; break;
        case 4: cout << data * 0.000001 << " (т) \n" << data * 0.00001 << " (ц)\n" << data * 0.001 << " (кг)\n" << data * 1000 << " (мг)" << endl; break;
        case 5: cout << data * 0.000000001 << " (т) \n" << data * 0.00000001 << " (ц)\n" << data * 0.000001 << " (кг)\n" << data * 0.001 << " (г)" << endl; break;
        default:
            cout << "Помилка!" << endl;
            return 1;
    }
    return 0;
}