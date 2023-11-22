#include <iostream>
#include <iomanip>
#include <ctime>
using std::cout;
using std::setw;

int main()
{

    clock_t start, end; // 定义clock_t变量
    start = clock();
    cout << "The prime numbers from 1 to 10000 are:\n";
    unsigned short total = 0;
    for (unsigned short i = 2; i <= 10000; i++)
    {
        bool ok = 1;
        for (unsigned short j = 2; j * j <= i; j++)
        {
            if (0 == i % j)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            cout << setw(6) << i;
            total++;
            if (0 == total % 10)
            {
                cout << '\n';
            }
        }
    }
    cout << '\n';
    cout << "Total of " << total << " prime numbers between 1 and 10000.";

    end = clock(); // 结束时间
    cout << "\ntime = " << double(end - start) / CLOCKS_PER_SEC << "s\n";
}