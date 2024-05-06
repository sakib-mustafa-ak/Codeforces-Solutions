#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s;
    cin >> s;
    int count = 0, n = 0, x = 1;
    for (int i = 0;; i++)
    {
        if (s % 10 == 4 || s % 10 == 7)
        {
            count++;
            s /= 10;
        }
        n += s[i] * x;
        cout << n << endl;
        x *= 10;
    }
    if (count == s.size())
        cout << "YES\n";
    else
        (n % 4 == 0 || n % 7 == 0) ? cout << "YES\n" : cout << "NO\n";
}