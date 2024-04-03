#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int ans = arr[0];
    for (int i = 1; i < n; i++)
    {
        ans = ans & arr[i];
    }
    cout << ans << endl;
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