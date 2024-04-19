#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, d, sum = 0, ans = -1;
    cin >> n >> d;
    vector<int> t(n);
    for (int i = 0; i < n; i++)
    {
        cin >> t[i];
        sum += t[i];
    }
    sum += (10 * (n - 1));
    if (sum <= d)
    {
        ans = 2 * (n - 1) + (d - sum) / 5;
    }
    cout << ans << endl;
}