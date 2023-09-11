//
// Created by Borys Oleksiienko on 09.09.2023.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float r, l, h;
    cout << "WARN: This program only works with correct cones.\n"
            "WARN: This program work only with int and float type.\n"
            "\tIf you enter a different type of data,\n"
            "\tthe behavior of the program may be unpredictable,\n"
            "\tthe responsibility for this factor rests with you.\n\n";
    cout << "Enter the radius of the cone: ";
    cin >> r;
    cout << "Enter the length of the cone generatrix: ";
    cin >> l;
    cout << "Enter the height of the cone: ";
    cin >> h;

    double area, volume;
    area = M_PI * r * (r + l);
    volume = 1.0 / 3.0 * M_PI * r * r * h;

    cout << "Conus area: " << area << endl;
    cout << "Conus volume: " << volume << endl;

    return 0;
}

