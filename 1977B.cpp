#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> neg1;

signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int i = 31;
        int x, c;
        cin >> x;
        if (x > 1)
        {
            for (i; i >= 0; i--)
            {
                if (pow(2, i) < x)
                {
                    c = i + 1;
                    break;
                }
            }
            x = pow(2, c) - x;
            while (x > 1)
            {
                for (i; i >= 0; i--)
                {
                    if (pow(2, i) <= x)
                    {
                        neg1.push_back(i);
                        x -= pow(2, i);
                        break;
                    }
                }
            }
            cout
                << c + 1 << endl;
            if (x % 2 == 1)
                cout << "-1 ";
            else
                cout << "0 ";
            int dd = 0;
            sort(neg1.begin(), neg1.end());
            for (int j = 1; j <= c; j++)
            {
                for (int k = 0; k < neg1.size(); k++)
                {
                    if (j == neg1[k])
                        cout << "-1 ";
                }
                if (j == c)
                    cout
                        << "1";
                else
                    cout << "0 ";
            }
            cout << "\n";
        }
        else
            cout << "1\n"
                 << "1\n";
    }
}