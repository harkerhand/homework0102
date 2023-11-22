#include <iostream>
#include <iomanip>
#include <ctime>

using std::cout;
using std::setw;

/* 写了三种方法, 另一种是筛子排除法, 查找更快, 但输出费时
    还有一种是暴力, 虽然效率低, 但可以边查找边输出, 耗时反而比法一更少 */

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