#include <iostream>
using std::cout;

int main()
{
    cout << "Perfect integers between 1 and 1000:\n";
    for (unsigned short i = 2; i <= 1000; i++)
    {
        unsigned short temp = 1;
        for (unsigned short j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                temp += j;
            }
        }
        if (i == temp)
        {
            cout << i << " = 1";
            for (unsigned short j = 2; j < i; j++)
            {
                if (!(i % j))
                    cout << " + " << j;
            }
            cout << '\n';
        }
    }
}