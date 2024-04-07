#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, count = 0;
    vector<int> x, y;
    cin >> n >> p;
    for (int i = 0; i < p; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    cin >> q;
    for (int i = p; i < p + q; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < p + q; i++)
    {
        if (x[i] != count)
            count++;
        if (x[i] != count)
            break;
    }

    (count == n) ? cout << "I become the guy.\n" : cout << "Oh, my keyboard!\n";
}