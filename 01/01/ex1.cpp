#include <iostream>
using namespace std;
int main()
{
    cout << "Input three different intergers: ";
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    cout << "Sum is " << a[0] + a[1] + a[2] << endl;
    cout << "Average is " << (a[0] + a[1] + a[2]) / 3 << endl;
    cout << "Products is " << a[0] * a[1] * a[2] << endl;

    int max = 0, min = 10000000;
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    cout << "Smallest is " << min << endl;
    cout << "Largest is " << max;

    return 0;
}