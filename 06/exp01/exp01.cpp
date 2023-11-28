#include <iostream>
using std::cin;
using std::cout;

int power(int base, unsigned int exponent)
{
    if (exponent == 1)
        return base;
    // 应该要写exponent是0返回1, 但题目没要求
    else
        return base * power(base, --exponent);
}

int main()
{
    cout << "Enter a base and an exponent:";
    int base;              // 正负都可以, 幂不为0, 底数无需排除0
    unsigned int exponent; // 大于等于1
    cin >> base >> exponent;
    cout << base << " raised to the " << exponent << " is " << power(base, exponent);
}