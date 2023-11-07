#include <iostream>
using namespace std;

int main()
{
    int value;
    int count = 0;
    int total = 0;
    cout << "Enter integers (9999 to end):" << endl;
    for (;;)
    {
        cin >> value;
        if (9999 == value)
        {
            break;
        }
        else
        {
            total += value;
            count++;
        }
    }

    if (count != 0)
    {
        cout << "The average is: " << static_cast<double>(total) / count << endl;
    }
    else
    {
        cout << "No values were entered." << endl;
    }
    return 0;
}