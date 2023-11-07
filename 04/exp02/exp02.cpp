#include <iostream>
using namespace std;

int main()
{
    int count = 0;
    long hypotenuseSquared;
    long sidesSquared;
    cout << "Side 1\tSide 2\tSide3" << endl;
    for (int i = 1; i <= 500; i++)
    {
        for (int j = i + 1; j <= 500; j++)
        {
            sidesSquared = i * i + j * j;
            for (int k = j + 1; k <= 500; k++)
            {
                hypotenuseSquared = k * k;
                if (hypotenuseSquared == sidesSquared)

                {
                    cout << i << '\t' << j << '\t' << k << '\n';
                    count++;
                }
            }
        }
    }
    cout << "A total of " << count << " triples were found." << endl;
    return 0;
}