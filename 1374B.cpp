#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    int count = 0;
    while (n != 1)
    {
        if (n % 6 == 0)
        {
            n = n / 6;
            count++;
        }
        else if (n % 3 == 0)
        {
            n = n * 2;
            count++;
        }
        else
        {
            count = -1;
            break;
        }
    }

    cout << count << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}