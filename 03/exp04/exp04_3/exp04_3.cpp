#include <iostream>
#include <cmath>
#include "..\factorial.h"
using namespace std;

int main()
{
    int acc;
    double x;
    cout << "输入精度并指定x(可为小数)" << endl;
    cin >> acc >> x;
    double ans = 1.0;
    for (int i = 1; i < acc; i++)
    {
        ans += pow(x, i) / factorial(i);
    }
    cout << "e^" << x << " = " << ans << endl;
}