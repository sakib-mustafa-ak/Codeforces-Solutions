#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, H, M;
    cin >> n >> H >> M;
    int min = (H * 60 + M), h, m, sleep, alarms[n];
    for (int i = 0; i < n; i++)
    {
        cin >> h >> m;
        int min2 = h * 60 + m;
        alarms[i] = min2;
    }
    sort(alarms, alarms + n);
    int next = 0;
    if (alarms[n - 1] < min)
    {
        next = 24 * 60;
    }
    for (int i = 0; i < n; i++)
    {
        if (alarms[i] + next >= min)
        {
            sleep = (alarms[i] + next) - min;
            cout << sleep / 60 << " " << sleep % 60 << endl;
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