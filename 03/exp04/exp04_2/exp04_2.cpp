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
    cout << "输入精度" << endl;
    cin >> acc;
    double ans = 1.0;
    for (int i = 1; i < acc; i++)
    {
        ans += 1.0 / factorial(i);
    }
    cout << "e = " << ans << endl;
}