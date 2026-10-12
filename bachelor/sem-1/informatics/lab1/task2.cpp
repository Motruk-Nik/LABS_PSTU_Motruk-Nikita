#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter m and n: ";
    cin >> m >> n;
    // Сохраняем исходные значения
    int m0 = m, n0 = n;
    cout << "m + --n = " << (m + --n) << endl;
    // Перед каждым следующим выражением возвращаем исходные значения
    m = m0;
    n = n0;
    cout << "m++ < ++n = " << (m++ < ++n) << endl;
    m = m0;
    n = n0;
    cout << "n-- < --m = " << (n-- < --m) << endl;
    return 0;
}
