#include <iostream>
using namespace std;

bool paren_check(char *expr);

int main()
{
    char a[] = "((a+1)*b/(c+d))";
    char b[] = "((a)+1)*b/)c+d))";
    cout << paren_check(a) << '\n'
         << paren_check(b);
    return 0;
}

bool paren_check(char *expr)
{
    int ok = 0;
    while (*expr != '\0')
    {
        if (*expr == '(')
            ok++;
        if (*expr == ')')
            ok--;
        expr++;
    }
    return !ok;
}