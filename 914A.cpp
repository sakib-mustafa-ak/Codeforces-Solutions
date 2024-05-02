#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int sq = sqrt(a[i]);
        if (sq * sq != a[i])
            ans.push_back(a[i]);
    }
    sort(ans.begin(), ans.end());
    cout << ans[ans.size() - 1] << endl;
}