#include <iostream>
using namespace std;

int main()
{
    float a = 1000, b = 0.0001f;
    float c = (a + b) * (a + b) * (a + b); // c — куб суммы 
    float d = a * a * a + 3 * a * a * b; // d — вычитаемая часть
    float e = 3 * a * b * b + b * b * b; // e — знаменатель
    cout << "float: " << (c - d) / e << endl;
    double a1 = 1000, b1 = 0.0001;
    double c1 = (a1 + b1) * (a1 + b1) * (a1 + b1); // c1 — куб суммы
    double d1 = a1 * a1 * a1 + 3 * a1 * a1 * b1; // d1 — вычитаемая часть
    double e1 = 3 * a1 * b1 * b1 + b1 * b1 * b1; // e1 — знаменатель
    cout << "double: " << (c1 - d1) / e1 << endl;

    return 0;
}
