#include <iostream>
#include <cmath>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c, d, e, f, g, h, i, x1, x2, x3, rez;
    cout << "Iveskite A = ";
    cin >> a;
    cout << "Iveskite B = ";
    cin >> b;
    cout << "Iveskite C = ";
    cin >> c;
    d = b * b - 4 * a * c;
    cout << "Diskriminantas yra : " << d << '.' << endl;

    if (d > 0) {
        rez = sqrt(d);
        e = -b - rez;
        f = a * 2;
        x1 = e / f;
        cout << "X1 Atsakymas : " << x1 << '.' << endl;
        g = -b + rez;
        h = a * 2;
        x2 = g / h;
        cout << "X2 Atsakymas : " << x2 << '.' << endl;
    }

    if (d < 0) {
        cout << "Rezultato nera";
    }

    if (d = 0) {
        i = 2 * a;
        x3 = -b / i;
        cout << "Diskriminantas lygus 0 " << x3 << '.' << endl;
    }

}
