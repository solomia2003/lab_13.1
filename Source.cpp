#include <iostream>
#include <math.h>
#include <iomanip>
#include "dod.h"
#include "sum.h"
#include "var.h"
using namespace std;
using namespace nsDod;
using namespace nsSum;
using namespace nsVar;
int main()
{
    cout << "x_p = "; cin >> x_p;
    cout << "x_k = "; cin >> x_k;
    cout << "dx = "; cin >> dx;
    cout << "e = "; cin >> e;
    cout << endl;
    cout << fixed;
    cout << "------------------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(22) << "S" << " |"
        << setw(17) << "exp(x*x)" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "------------------------------------------------------------" << endl;
    x = x_p;
    while (x <= x_k) {
        sum(); // виклик процедури обчислення суми
        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(22) << setprecision(5) << s << " |"
            << setw(17) << setprecision(5) << exp(x * x) << " |"
            << setw(5) << n << " |"
            << endl; // тут слід використовувати форматний вивід
        x += dx;
    }
    cout << "------------------------------------------------------------" << endl;
    cin.get();
    return 0;
}