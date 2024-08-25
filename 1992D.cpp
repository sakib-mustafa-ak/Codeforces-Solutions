#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        ll ans = 1;
        vector<ll> co, croc;
        ll count = 0, sum = 0, cro = 0;
        if (m > n)
            ans = 1;
        for (int i = 0; i < s.size(); i++)
        {
            count++;
            if (s[i] == 'L')
            {
                co.push_back(count);
                count = 0;
                if (s[i + m] == 'C')
                {
                    ans = 0;
                    break;
                }
            }
            if (s[i] == 'C')
                cro++;
            if (s[i] != 'C')
            {
                croc.push_back(cro);
                cro = 0;
            }
        }
        count++;
        co.push_back(count);
        croc.push_back(cro);
        for (int i = 0; i < co.size(); i++)
        {
            co[i] -= m;
            if (co[i] >= 0)
                sum += co[i];
        }
        for (int i = 0; i < croc.size(); i++)
        {
            croc[i] -= m;
            if (croc[i] >= 0)
            {
                ans = 0;
                break;
            }
        }

        if (sum > k)
            ans = 0;
        (ans == 1) ? cout << "YES\n" : cout << "NO\n";
    }
}