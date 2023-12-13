#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    array<int, 10> bubble = {0};
    cout << "Data items in original order\n";
    for (int &i : bubble)
    {
        cin >> i;
    }

    for (array<int, 10>::iterator i = bubble.begin(); i != bubble.end(); i++)
    {
        bool ok = 1;
        for (array<int, 10>::iterator j = i; j != bubble.end(); j++)
        {
            if (*i > *j)
            {
                swap(*i, *j);
                ok = 0;
            }
        }
        if (ok)
        {
            break;
        }
    }

    cout << "Data items in ascending order\n";
    for (int &i : bubble)
    {
        cout << setw(4) << i;
    }
    return 0;
}