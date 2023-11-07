#include <iostream>
using namespace std;

int main()
{
    for (int i = 1, j = 1; i <= 9; i++)
    {
        for (int k = 0; k <= 5 - j; k++)
        {
            cout << ' ';
        }
        for (int k = 0; k < j * 2 - 1; k++)
        {
            cout << '*';
        }
        cout << endl;
        if (i <= 4)
        {
            j++;
        }
        else
        {
            j--;
        }
    }
    return 0;
}