//
// Created by Borys Oleksiienko on 09.09.2023.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float x, b;
    cout << "WARN: This program work only with int and float type.\n"
            "\tIf you enter a different type of data,\n"
            "\tthe behavior of the program may be unpredictable,\n"
            "\tthe responsibility for this factor rests with you.\n\n";
    cout << "Enter value х: ";
    cin  >> x;
    cout << "Enter value b (only positive): ";
    cin  >> b;

    double denominator, numerator, a;
    denominator = (cos(x) * sqrt(b) - abs(x) + (log(4) /
                                                log(3) * pow(x, 4)));
    if (denominator == 0) {
        cout << "Error! You can't divide by zero.";
    } else if (b < 0) {
        cout << "Error! The root expression cannot be less than zero.";
    } else {
        numerator = (2 * x - 3) * ((7 + 12 * b) * (7 + 12 * b)) + x;
        a = numerator / denominator;
        cout << "Answer: " << a << endl;
    }

    return 0;
}
