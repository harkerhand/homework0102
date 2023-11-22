#include <iostream>
#include <iomanip>
#include <ctime>

using std::cout;
using std::setw;

// 还写了一种筛法, 见bac

int main()
{
    /* clock_t start, end;
    start = clock(); */
    cout << "The prime numbers from 1 to 10000 are:\n";
    unsigned short total = 0;
    unsigned short ans[10005] = {2, 0};
    for (unsigned short i = 3; i <= 10000; i++)
    {
        bool ok = 1;
        for (unsigned short j = 0; j <= total; j++)
        {
            if (0 == i % ans[j])
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            total++;
            ans[total] = i;
            cout << setw(6) << i;
            if (0 == (total + 1) % 10)
            {
                cout << '\n';
            }
        }
    }

    cout << '\n';
    cout << "Total of " << ++total << " prime numbers between 1 and 10000.";

    /* end = clock();
    cout << "\ntime = " << double(end - start) / CLOCKS_PER_SEC << "s"; */
}