#include <iostream>
#include <cstdlib>
using std::cout;
bool coin()
{
    return rand() % 2;
}

int main()
{
    srand(114514);
    unsigned int times = 0, count = 0;
    for (unsigned int i = 10; i <= 100000; i *= 10)
    {
        times = i;
        for (unsigned j = 0; j < times; j++)
        {
            if (coin())
                count++;
        }
        cout << "扔" << times << "次正面的占比: " << static_cast<double>(count) / times * 100 << "%\n";
    }
}