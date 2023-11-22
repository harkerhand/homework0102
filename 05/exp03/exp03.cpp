#include <iostream>
#include <iomanip>

using std::cout;
using std::setw;

int main()
{
    cout << "The prime numbers from 1 to 10000 are:\n";
    unsigned short total = 0;
    bool ans[10005] = {0};
    for (unsigned short i = 2; i <= 10000; i++)
    {
        for (unsigned short j = 2; j * j <= i; j++)
        {
            if (0 == i % j)
            {
                ans[i] = 1;
                break;
            }
        }
        for (unsigned short j = 2; i * j <= 10000; j++)
        {
            ans[i * j] = 1;
        }
    }
    unsigned short count = 0;
    for (unsigned short i = 2; i <= 10000; i++)
    {

        if (!ans[i])
        {
            cout << setw(5) << i << ' ';
            total++;
            count++;
        }
        if (7 == count)
        {
            cout << '\n';
            count = 0;
        }
    }
    cout << '\n';

    cout << "Total of " << total << " prime numbers between 1 and 10000.";
}