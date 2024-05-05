#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    // cout << 0 << endl;
    vector<int> a, b, c;
    a.push_back(0);
    b.push_back(0);
    c.push_back(0);
    for (int j = 1; j <= n; j++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a.push_back(x + a[j - 1]);
        b.push_back(y + b[j - 1]);
        c.push_back(z + c[j - 1]);
    }
    (a[n] == 0 && b[n] == 0 && c[n] == 0) ? cout << "YES\n" : cout << "NO\n";
}