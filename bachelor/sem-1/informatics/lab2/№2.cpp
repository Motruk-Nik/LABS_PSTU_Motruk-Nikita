#include <cmath>
#include <clocale>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.65001");

    double epsilon = 0.0001;
    double term = 1.0 / 3.0; // первый член ряда
    double sum = 0.0;
    int n = 1;

    while (term >= epsilon)
    {
        sum += term; // находим следующий член ряда
        term = term * pow(1.0 * n / (n + 1), n);
        n++;
    }

    cout << "Сумма ряда a_n = n! / (3 * n^n)" << endl;
    cout << "Точность: " << epsilon << endl;
    cout << "Количество слагаемых: " << n - 1 << endl;
    cout << fixed << setprecision(10);
    cout << "Сумма ряда = " << sum << endl;

    return 0;
}
