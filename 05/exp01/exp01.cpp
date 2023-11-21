#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int side;
    char fillCharacter;
    cout << "Input side: ";
    while (1)
    {
        cin >> side;
        if (side <= 0)
        {
            cout << "什么东西？要正整数！重来: ";
        }
        else
        {
            break;
        }
    }
    cout << "Input fillCharacter: ";
    cin >> fillCharacter;
    cout << '\n';
    for (int i = 0; i < side; i++)
    {
        for (int j = 0; j < side; j++)
        {
            cout << fillCharacter;
        }
        cout << '\n';
    }
}
