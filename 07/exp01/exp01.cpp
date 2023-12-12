#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    array<double, 20> ans = {0};
    double temp;
    cout << "Enter 20 intergers between 10 and 100:\n";
    for (int i = 0; i < 20; i++)
    {
        cin >> temp;
        if (temp >= 10 && temp <= 100)
        {
            if (!binary_search(ans.begin(), ans.end(), temp))
            {
                ans[i] = temp;
            }
            else
            {
                cout << "Duplicate number.\n";
                i--;
            }
        }
        else
        {
            cout << "Invalid number.\n";
            i--;
        }
    }
    cout << "\nThe nonduplicate values are:\n";
    for (double i : ans)
    {
        if (i)
        {
            cout << i << " ";
        }
    }
}