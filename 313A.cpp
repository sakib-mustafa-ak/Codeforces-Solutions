#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    int num;
    if (n >= 0)
    {
        cout << n << endl;
    }
    else
    {
        int x = n / 10;
        int y = (n / 100) * 10 + n % 10;
        cout << max(x, y) << endl;
    }
}