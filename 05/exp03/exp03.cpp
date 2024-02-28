#include <iostream>
#include <iomanip>
#include <ctime>

using std::cout;
using std::setw;

// 仅模先前素数
// 有输出0.062s, 无输出0.001s
void fun1()
{
    cout << "The prime numbers from 1 to 10000 are:\n";
    unsigned short total = 0;
    unsigned short ans[10005] = {2, 0};
    for (unsigned short i = 3; i <= 10000; i++)
    {
        bool ok = 1;
        for (unsigned short j = 0; j <= total && ans[j] * ans[j] <= i; j++)
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
}

// 筛法排除永远的神!!!
// 有输出0.096s, 无输出0.000s太小了显示不出来
void fun2()
{
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
        }
        if (10 == count)
        {
            cout << '\n';
            count = 0;
        }
    }
    cout << '\n';
    cout << "Total of " << total << " prime numbers between 1 and 10000.";
}

// 暴力求解, 但是用平方根优化
// 有输出0.061s, 无输出0.001s
void fun3()
{
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
            total++;
            cout << setw(6) << i;
            if (0 == total % 10)
            {
                cout << '\n';
            }
        }
    }
    cout << '\n';
    cout << "Total of " << total << " prime numbers between 1 and 10000.";
}

int main()
{
    // 测试时间时候注释掉函数中cout, 可直观显示计算用时
    // 但各方法输出手段不同, 故应该考虑带上输出的时间
    // 但用时间测试并不是很严谨
    clock_t start, end;
    start = clock();
    fun1();
    end = clock();
    cout << "\ntime of fun1 = " << double(end - start) / CLOCKS_PER_SEC << "s\n";

    start = clock();
    fun2();
    end = clock();
    cout << "\ntime of fun2 = " << double(end - start) / CLOCKS_PER_SEC << "s\n";

    start = clock();
    fun3();
    end = clock();
    cout << "\ntime of fun3 = " << double(end - start) / CLOCKS_PER_SEC << "s\n";
}