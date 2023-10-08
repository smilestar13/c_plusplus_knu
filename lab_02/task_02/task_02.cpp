//
// Created by Borys Oleksiienko on 23.09.2023.
//

#include <iostream>

using namespace std;

int main() {
    float x, y;
    short r = 4;
    bool res;

    cout << "Введіть значення 'x': ";
    cin >> x;
    cout << "Введіть значення 'y': ";
    cin >> y;

    res = ((x - 4) * (x - 4) + (y - 4) * (y - 4) < r * r) ||
            ((x + 4) * (x + 4) + (y - 4) * (y - 4) < r * r);

    if (res) {
        cout << "\nТочка з вашими координатами ("<< x <<";"<< y <<") входить у задану область." << endl;
    } else {
        cout << "\nТочка з вашими координатами ("<< x <<";"<< y <<") НЕ входить у задану область." << endl;
    }

    return 0;
}
