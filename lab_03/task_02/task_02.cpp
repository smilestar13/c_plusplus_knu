//
// Created by Borys Oleksiienko on 23.10.2023.
//

//Спортсмен-лижник почав тренування, пробігши в перший день 10 км. Кожен
//наступний день він збільшував довжину пробігу на P відсотків від пробігу
//попереднього дня (P - дійсне, 0 < P < 50). За заданим P визначити, після якого
//дня сумарний пробіг лижника за всі дні перевищить М км, і вивести знайдену
//кількість днів K (ціле) і сумарний пробіг S (дійсне).

#include <iostream>

using namespace std;

int main () {
    int K = 1;
    float S = 10, x, M, P, pd = 10;

    cout << "Введіть значення P (0-50): ";
    cin >> P;
    cout << "Введіть значення M (км): ";
    cin >> M;

    while (M > S) {
        x = pd * P / 100;
        pd = pd + x;
        S += pd;
        K += 1;
    }

    cout << "Кількість днів, що біг лижник = " << K;
    cout << "\nКількість кілометрів, що пробіг лижник = " << S << endl;

    return 0;
}