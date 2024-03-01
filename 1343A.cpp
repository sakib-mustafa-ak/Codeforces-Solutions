#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long n;
    cin >> n;
    long long sum = 1, k = 1;
    for (long long i = 0; i < n; i++)
    {
        sum = sum + pow(2, k++);
        if (n % sum == 0)
        {
            cout << n / sum << endl;
            break;
        }
    }
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