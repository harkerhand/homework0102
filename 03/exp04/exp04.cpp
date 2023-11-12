#include <iostream>
#include <cmath>
using namespace std;

long long factorial(unsigned int n)
{
    long long ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    return ans;
}

double e(int acc)
{
    double ans = 1.0;
    for (int i = 1; i < acc; i++)
    {
        ans += 1.0 / factorial(i);
    }
    return ans;
}

double e_x(int acc, double x)
{
    double ans = 1.0;
    for (int i = 1; i < acc; i++)
    {
        ans += pow(x, i) / factorial(i);
    }
    return ans;
}

int main()
{
    cout << "阶乘, 请输入非负整数:\n";
    int n;
    while (1)
    {
        cin >> n;
        if (n >= 0)
        {
            cout << "阶乘为" << factorial(n) << endl;
            break;
        }
        else
        {
            cout << "非法输入，再次输入：" << endl;
        }
    }

    cout << "求e, 输入精度\n";
    cin >> n;
    cout << "e = " << e(n) << endl;

    cout << "求e^x, 输入精度和x\n";
    double x;
    cin >> n >> x;
    cout << "e^x = " << e_x(n, x) << endl;
}