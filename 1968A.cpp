#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, mx = 0, mxi;
        cin >> x;
        for (int i = x - 1; i >= 0; i--)
        {
            int a = __gcd(x, i) + i;
            if (a > mx)
            {
                mx = a;
                mxi = i;
            }
        }
        cout << mxi << endl;
    }
}