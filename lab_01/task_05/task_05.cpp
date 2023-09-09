//
// Created by Borys Oleksiienko on 09.09.2023.
//
#include <iostream>

using namespace std;

int main() {
    int bait, mega, kilo;
    cout << "WARN: This program work only with int type.\n"
            "\tIf you enter a different type of data,\n"
            "\tthe behavior of the program may be unpredictable,\n"
            "\tthe responsibility for this factor rests with you.\n\n";
    cout << "Enter the size of your file in bytes: ";
    cin >> bait;

    mega = bait / (1024 * 1024);
    kilo = (bait - mega * (1024 * 1024)) / 1024;
    bait = bait - (mega * (1024 * 1024) + kilo * 1024);

    cout << mega << endl;
    cout << kilo << endl;
    cout << bait << endl;

    return 0;
}