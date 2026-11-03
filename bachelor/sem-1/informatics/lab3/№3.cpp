#include <cmath>
#include <clocale>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{

    const double pi = acos(-1.0);
    const double epsilon = 0.0001;
    const int n = 20;
    const double a = pi / 5.0;
    const double b = pi;
    const double step = (b - a) / 10.0;

    cout << fixed << setprecision(6);
    cout << "       X           SN           SE            Y" << endl;

    for (int k = 0; k <= 10; k++)
    {
        double x = a + k * step;

        // Сумма заданного количества членов
        double sumN = 0.0;
        for (int i = 1; i <= n; i++)
        {
            double term = pow(-1.0, i) * cos(i * x) / (i * i);
            sumN += term;
        }

        // Остаток после i членов не превышает 1 / i
        double sumE = 0.0;
        double term;
        int i = 1;
        do
        {
            term = pow(-1.0, i) * cos(i * x) / (1.0 * i * i);
            sumE += term;
            i++;
        } while (1.0 / (i - 1) > epsilon);

        // Точное значение функции
        double exact = (x * x - pi * pi / 3.0) / 4.0;

        cout << setw(10) << x << setw(13) << sumN
             << setw(13) << sumE << setw(13) << exact << endl;
    }

    return 0;
}
