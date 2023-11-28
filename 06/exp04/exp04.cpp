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
void print(T s1, T s2, int count)
{
    cout << "The smallest number: " << s1 << '\n';
    if (count != 3)
        cout << "The second smallest number: " << s2 << '\n';
    cout << count << " smallest number.\n\n";
}

int main()
{
    int ints1, ints2;
    char chars1, chars2;
    double doubles1, doubles2;
    int count;

    count = TwoSmallest(1, 2, -1, ints1, ints2);
    print(ints1, ints2, count);

    count = TwoSmallest(1, 9, 1, ints1, ints2);
    print(ints1, ints2, count);

    count = TwoSmallest('a', 'a', 'a', chars1, chars2);
    print(chars1, chars2, count);

    count = TwoSmallest(3.12, 1.3, 5.2, doubles1, doubles2);
    print(doubles1, doubles2, count);
}