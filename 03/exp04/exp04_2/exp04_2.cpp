#include <iostream>
#include "..\factorial.h"
using namespace std;

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