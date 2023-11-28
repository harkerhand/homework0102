#include <iostream>
using std::cin;
using std::cout;

int main()
{
    cout << "Enter two integers:";
    unsigned int a, b; // 限制正数
    cin >> a >> b;
    int max = 1;
    for (int i = 2; i <= a && i <= b; i++)
        if (a % i == 0 && b % i == 0)
            max = i;
    cout << "Greatest common divisor of " << a << " and " << b << " is " << max;
}