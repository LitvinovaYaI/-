
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int factorial(int n)
{
    int f;
    if (n == 0) {
        f = 1;
    }
    else {
        f = n * factorial(n - 1);
    }
    return f;
}
long Cnk(int n, int k)
{
    int C;
    if (n >= k) {
        C = factorial(n)/(factorial(n-k)*factorial(k));
    }
    else {
        cout << "Введите корректные данные" << endl;
    }
    cout << "Искомое значение C " << C << endl;
    return 0;
}
float f(float x) {
    return cos(x) / (sqrt(5 - pow(x, 3)));
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите число, факториал которого требуется посчитать" << endl;
    cin >> n;
    cout << factorial(n) << endl;
    int k;
    cout << "Введите n и k для вычисления биномиального коэффициента" << endl;
    cin >> n >> k;
    Cnk(n, k);
    float x0, xm, h;
    cout << "Введите левую и правую границы отрезка, а так же шаг" << endl;
    cin >> x0 >> xm >> h;
    n = (xm - x0) / h;
    cout <<setw(25)<< "x          y" << endl;
    for (int i = 0; i <= n; i ++) {
        cout << setw(15)<< x0 + i * h << "    " << f(x0 +  i * h)<<endl;
    }
}