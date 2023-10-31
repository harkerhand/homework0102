#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    string a = to_string(n);
    int ans = 0;
    for (int i = 0; i < a.length(); i++)
    {
        ans += n % 10 * pow(2, i);
        n /= 10;
    }
    cout << ans;
}