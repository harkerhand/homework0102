#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    array<bool, 1000> ans = {0};
    for (int i = 2; i <= 1000; i++)
    {
        for (int j = 2; j * j <= i; j++)
        {
            if (0 == i % j)
            {
                ans[i] = 1;
                break;
            }
        }
        for (int j = 2; i * j <= 1000; j++)
        {
            ans[i * j] = 1;
        }
    }
    int count = 0;
    for (unsigned short i = 2; i <= 1000; i++)
    {
        if (!ans[i])
        {
            cout << setw(6) << i << ' ';
            count++;
        }
        if (8 == count)
        {
            cout << '\n';
            count = 0;
        }
    }
    return 0;
}