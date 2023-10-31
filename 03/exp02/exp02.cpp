#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n < 10000 || n > 99999)
    {
        cout << "不是五位数" << endl;
    }
    else
    {
        if (n % 10 == n / 10000 && n / 10 % 10 == n / 1000 % 10)
        {
            cout << "It is a palindrome" << endl;
        }
        else
        {
            cout << "It is not a palindrome" << endl;
        }
    }
}