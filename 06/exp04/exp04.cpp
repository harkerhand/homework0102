#include <iostream>
using std::cout;
using std::swap;
template <typename T>
int TwoSmallest(T a, T b, T c, T &s1, T &s2)
{
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);
    s1 = a;
    s2 = (s1 == s2) ? c : b;
    return 1 + (a == b) + (a == c);
}

template <typename T>
void print(T a, T b, T c)
{
    T s1, s2;
    int count;
    count = TwoSmallest(a, b, c, s1, s2);
    cout << "The smallest number: " << s1 << '\n';
    if (count != 3)
        cout << "The second smallest number: " << s2 << '\n';
    cout << count << " smallest number.\n\n";
}

int main()
{

    print(1, 2, -1);

    print(1, 9, 1);

    print('a', 'a', 'a');

    print(3.12, 1.3, 5.2);
}