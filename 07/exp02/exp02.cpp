#include <iostream>
#include <array>
#include <ctime>
#include <random>
#include <iomanip>
using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    array<int, 11> ans = {0};
    for (int i = 0; i < 36000; i++)
    {
        ans[rand() % 6 + rand() % 6]++;
    }
    cout << setw(3) << "Sum" << setw(9) << "Total" << setw(9) << "Expected" << setw(9) << "Actual\n";
    for (int i = 0; i < 11; i++)
    {
        cout << setw(3) << i + 2 << setw(12) << ans[i] << setw(9) << fixed << setprecision(3) << (6 - ((i - 5 > 0) ? i - 5 : 5 - i)) / 6.0 / 6.0 * 100 << "%" << setw(12) << ans[i] / 360.0 << "%" << endl;
    }
}