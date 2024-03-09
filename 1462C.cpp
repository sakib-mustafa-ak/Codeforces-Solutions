#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int x;
    cin >> x;
    vector<int> ans;
    for (int i = 9; i > 0; i--)
    {

        x -= i;
        if (x <= 0)
        {
            ans.push_back(x + i);

            break;
        }
        else
        {
            ans.push_back(i);
        }
    }

    if (x <= 0)
    {
        sort(ans.begin(), ans.end());
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i];
        }
    }
    else
    {
        cout << "-1";
    }
    cout << endl;
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