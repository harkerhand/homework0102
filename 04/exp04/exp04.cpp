#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "输入行的数量" << endl;
    cin >> n;
    for (int i = 1, j = 1; i <= n; i++)
    {
        for (int k = 0; k <= (n + 1) / 2 - j; k++)
        {
            cout << ' ';
        }
        for (int k = 0; k < j * 2 - 1; k++)
        {
            cout << '*';
        }
        cout << endl;
        if (i <= (n - 1) / 2)
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