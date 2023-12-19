#include <iostream>
using namespace std;

int main()
{
    int matrix[3][5] = {{1, 1, 4, 5, 1}, {4, 1, 9, 1, 9}, {8, 1, 0, 666, 520}};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << *(*(matrix + j) + i) << ' '; // 其实就是matrix[j][i]
        }
        cout << '\n';
    }
    return 0;
}