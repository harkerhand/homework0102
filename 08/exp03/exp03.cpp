#include <iostream>
using namespace std;

int main()
{
    cout << "Please input two strings:\n";
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    const unsigned int alen = a.length(), blen = b.length();
    char achars[alen + 1], bchars[blen + 1];
    for (int i = 0; i < alen; i++)
    {
        if (a[i] == '!' || a[i] == '.' || a[i] == '?' || a[i] == ';')
            achars[i] = ',';
        else if (a[i] >= 'a' && a[i] <= 'z')
            achars[i] = a[i] - 'a' + 'A';
        else
            achars[i] = a[i];
    }
    for (int i = 0; i < blen; i++)
    {
        if (b[i] >= 'a' && b[i] <= 'z')
            bchars[i] = b[i] - 'a' + 'A';
        else
            bchars[i] = b[i];
    }

    /* 其实直接在前面两个循环里面输出也可以
    甚至不需要额外的字符串数组 */

    cout << "Output:\n";
    for (int i = 0; i < alen; i++)
    {
        cout << achars[i];
    }
    cout << ' ';
    for (int i = 0; i < blen; i++)
    {
        cout << bchars[i];
    }
    return 0;
}