#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k;
        int xt, yt, sum = 0;
        xt = x * k;
        yt = y * k;
        for (int i = 1; i < k; i++)
        {
            if (xt < 0 || yt < 0)
            {
                cout << i * (-1) << " " << i * (-1) << "\n";
                sum -= i;
            }
            else
            {
                cout << i << " " << i << "\n";
                sum += i;
            }
        }
        if (sum < 0)
        {
            cout << xt + sum << " " << yt + sum << "\n";
        }
        else
        {
            cout << xt - sum << " " << yt - sum << "\n";
        }
    }
}