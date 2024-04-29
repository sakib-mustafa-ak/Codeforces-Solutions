#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, mni, mn;
        cin >> n >> k;
        vector<int> a, b;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
            b.push_back(x);
        }
        sort(b.begin(), b.end(), greater<int>());
        for (int i = 0; i < min(n, k); i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] == a[j])
                {
                    if (a[j - 1] >= a[j + 1] && j - 1 >= 0 && j + 1 < n)
                    {
                        a[j] = a[j + 1];
                        break;
                    }
                    else if (j - 1 < 0 && j + 1 == n)
                    {
                        break;
                    }
                    else if (j - 1 < 0)
                    {
                        a[j] = a[j + 1];
                        break;
                    }
                    else if (j + 1 == n)
                    {
                        a[j] = a[j - 1];
                        break;
                    }
                }
            }
        }
        // long long sum =0;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}