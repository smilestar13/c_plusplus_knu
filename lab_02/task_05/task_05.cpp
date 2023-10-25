//
// Created by Borys Oleksiienko on 24.09.2023.
//

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int day, month;

    cout << "Введіть поточний день: ";
    cin >> day;
    cout << "Введіть поточний місяць: ";
    cin >> month;

    int daysInMonth = 0;

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: daysInMonth = 31; break;
        case 4: case 6: case 9: case 11: daysInMonth = 30; break;
        case 2: daysInMonth = 28; break;
        default: cout << "Невірно введений місяць." << endl;
            return 1;
    }

    if (day < daysInMonth) {
        day++;
    } else {
        day = 1;
        if (month == 12) {
            month = 1;
        } else {
            month++;
        }
    }

    if (day < 10 && month < 10) {
        cout << "Наступний день: " << setw(2) << setfill('0') << day << "." << setw(2) << setfill('0') << month << endl;
    } else if (day < 10) {
        cout << "Наступний день: " << setw(2) << setfill('0') << day << "." << month << endl;
    } else if (month < 10) {
        cout << "Наступний день: " << day << "." << setw(2) << setfill('0') << month << endl;
    } else {
        cout << "Наступний день: " << day << "." << month << endl;
    }
    return 0;
}
