#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum1 = 0, sum2 = 0;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++)
            cin >> a[i];
        sort(a.begin(), a.end());
        for (int i = 0; i < k - 1; i++)
            sum1 += a[i], sum2 += (a[i] - 1);
        cout << sum1 + sum2 << endl;
    }
}