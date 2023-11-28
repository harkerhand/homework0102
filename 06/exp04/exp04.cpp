#include <iostream>
using std::cout;
using std::swap;
template <typename T>
int TwoSmallest(T a, T b, T c)
{
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);
    cout << "The smallest number: " << a << '\n';
    if (a == b)
    {
        if (a != c)
            cout << "The second smallest number: " << c << '\n';
    }
    else
        cout << "The second smallest number: " << b << '\n';
    return 1 + (a == b) + (a == c);
}
int main()
{
    cout << TwoSmallest(1, 2, -1) << " smallest number\n";
    cout << TwoSmallest(1, 9, 1) << " smallest number\n";
    cout << TwoSmallest('a', 'a', 'a') << " smallest number\n";
    cout << TwoSmallest(3.12, 1.3, 5.2) << " smallest number";
}