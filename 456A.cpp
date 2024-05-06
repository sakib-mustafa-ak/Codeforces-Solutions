#include <bits/stdc++.h>
using namespace std;
void GG()
{
    int n;
    cin >> n;
    pair<int, int> p[n];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        p[i] = make_pair(x, y);
    }
    sort(p, p + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (p[i].first < p[i + 1].first && p[i].second > p[i + 1].second)
        {
            cout << "Happy Alex" << endl;
            return;
        }
    }
    cout << "Poor Alex" << endl;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    GG();
    return 0;
}
