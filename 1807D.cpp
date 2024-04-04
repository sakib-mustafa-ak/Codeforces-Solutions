#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long n, q;
    cin >> n >> q;
    vector<long long> a(n + 1), new_a(n + 1, 0);

    for (long long i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        new_a[i] = new_a[i - 1] + a[i];
    }

    while (q--)
    {
        long long l, r, k;
        cin >> l >> r >> k;

        long long p = new_a[r] - new_a[l - 1];
        long long sum = new_a[n];
        sum -= p;
        sum += ((r - l + 1) * k);
        if (sum % 2 == 1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    long long t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}