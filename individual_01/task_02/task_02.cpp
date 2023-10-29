//
// Created by Borys Oleksiienko on 29.10.2023.
//

#include <iostream>
#include <fstream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
    ifstream fin("inOleksiienko.txt");
    ofstream fout("outOleksiienko.txt");

    float x1, y1, xn, a, y = 0, square = 0, y2, x2;

    fin >> x1 >> y1;
    a = x1;
    while (!fin.eof())
    {
        fin >> x2 >> y2;
        xn = x2 - x1;
        square = xn * y2;
        y += square;
        x1 = x2;
        y1 = y2;
    }

    fout << "Промiжок: [" << a << ";" << x2 << "]" << endl;

    fout << "Площа: " << y << endl;

    fin.close();
    fout.close();

    cout << "Результат у файлi 'outOleksiienko'";

    return 0;
}