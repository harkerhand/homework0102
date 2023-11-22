#include <iostream>
#include <iomanip>
#include <ctime>

using std::cout;
using std::setw;

// 受不了了, 写了三种方法, 这种是最慢的, 都没暴力算的快
// 平均 0.092s, 另一种和暴力的都是平均 0.066s

int main()
{
    clock_t start, end;
    start = clock();
    cout << "The prime numbers from 1 to 10000 are:\n";
    unsigned short total = 0, count = 0;
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
            count++;
            if (7 == count)
            {
                cout << '\n';
                count = 0;
            }
        }
    }

    cout << '\n';
    cout << "Total of " << ++total << " prime numbers between 1 and 10000.";

    end = clock(); // 结束时间
    cout << "\ntime = " << double(end - start) / CLOCKS_PER_SEC << "s" << '\n';
}