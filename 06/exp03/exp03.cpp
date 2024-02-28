#include <iostream>

using std::cin;
using std::cout;

int gcd(unsigned int x, unsigned int y)
{
    if (x < y) // 保证x > y
    {
        x = x + y;
        y = x - y;
        x = x - y;
    }
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}
int main()
{
    cout << "Enter two integers:";
    unsigned int a, b;
    cin >> a >> b;
    cout << "Greatest common divisor of " << a << " and " << b << " is " << gcd(a, b);
}