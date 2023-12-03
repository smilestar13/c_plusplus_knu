//
// Created by Borys Oleksiienko on 02.12.2023.
//

#include <iostream>
#include <algorithm>

using namespace std;

void changeInt(double &A, double &B, double &C) {
    double maxVal = max(max(A, B), C);
    double minVal = min(min(A, B), C);

    if (A == maxVal) A = -A;
    else if (B == maxVal) B = -B;
    else if (C == maxVal) C = -C;

    if (A == minVal) A *= 2;
    else if (B == minVal) B *= 2;
    else if (C == minVal) C *= 2;
}

//void changeInt(double *A, double *B, double *C) {
//    double maxVal = max(max(*A, *B), *C);
//    double minVal = min(min(*A, *B), *C);
//
//    if (*A == maxVal) *A = -*A;
//    else if (*B == maxVal) *B = -*B;
//    else if (*C == maxVal) *C = -*C;
//
//    if (*A == minVal) *A *= 2;
//    else if (*B == minVal) *B *= 2;
//    else if (*C == minVal) *C *= 2;
//}

int main() {
    double A1, B1, C1, A2, B2, C2;

    cout << "Введіть перший набор чисел (A1, B1, C1): ";
    cin >> A1 >> B1 >> C1;
    changeInt(A1, B1, C1);
    cout << "Модифіковані значення: " << A1 << "; " << B1 << "; " << C1 << ";" << endl;

    cout << "Введіть другий набор чисел (A2, B2, C2): ";
    cin >> A2 >> B2 >> C2;
    changeInt(A2, B2, C2);
    cout << "Модифіковані значення: " << A2 << "; " << B2 << "; " << C2 << ";" << endl;

    return 0;
}

//int main() {
//    double A1, B1, C1, A2, B2, C2;
//
//    cout << "Введіть перший набор чисел (A1, B1, C1): ";
//    cin >> A1 >> B1 >> C1;
//    changeInt(&A1, &B1, &C1);
//    cout << "Модифіковані значення: " << A1 << "; " << B1 << "; " << C1 << ";" << endl;
//
//    cout << "Введіть другий набор чисел (A2, B2, C2): ";
//    cin >> A2 >> B2 >> C2;
//    changeInt(&A2, &B2, &C2);
//    cout << "Модифіковані значення: " << A2 << "; " << B2 << "; " << C2 << ";" << endl;
//
//    return 0;
//}

