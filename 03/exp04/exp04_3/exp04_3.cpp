#include <iostream>
using namespace std;

int factorial(int n)
{
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int acc;
    double x;
    cout << "输入精度并指定x(可为小数)" << endl;
    cin >> acc >> x;
    double ans = 1.0;
    for (int i = 1; i < acc; i++)
    {
        ans += x / factorial(i);
    }
    cout << "e^" << x << " = " << ans << endl;
}