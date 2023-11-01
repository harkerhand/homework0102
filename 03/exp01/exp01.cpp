#include <iostream>
using namespace std;

int main()
{
    int counter = 10;
    double number;
    double largest = 0;
    while (counter--)
    {
        cin >> number;
        if (number < 0)
        {
            cout << "不能为负,重新输入" << endl;
            counter++;
        }
        else
        {
            if (number > largest)
            {
                largest = number;
            }
        }
    }
    cout << largest;
}