#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, count, ac;
        cin >> x >> y;
        if (y % 2 == 0)
        {
            count = y / 2;
            ac = count * 7;
        }
        else
        {
            count = (y + 1) / 2;
            ac = count * 7 + 4;
        }
        if (x <= ac)
            cout << count << endl;
        else
        {
            int ex = x - ac;
            count += ex / 15;
            if (ex % 15 != 0)
                count++;
            cout << count << endl;
        }
    }
}