#include <iostream>
using namespace std;

int getsum0(int a, int b);
int *getsum1(int a, int b);
int *getsum2(int a, int b);
int getsum3(int a, int b);
int &getsum4(int a, int b);

int main()
{
    cout << getsum0(114, 514) << '\n';
    cout << getsum1(114, 514) << '\n';
    cout << getsum2(114, 514) << '\n';
    cout << getsum3(114, 514) << '\n';
    cout << getsum4(114, 514) << '\n';

    return 0;
}

int getsum0(int a, int b)
{
    int temp = a + b;
    return temp;
}
int *getsum1(int a, int b)
{
    int temp = a + b;
    return &temp;
}
int *getsum2(int a, int b)
{
    int *temp = &a;
    *temp = a + b;
    return temp;
}
int getsum3(int a, int b)
{
    int *temp = &a;
    *temp = a + b;
    return *temp;
}
int &getsum4(int a, int b)
{
    int &temp = a;
    temp = a + b;
    return temp;
}