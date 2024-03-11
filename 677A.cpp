#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h;
    cin >> n >> h;
    int a[n], w = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= h)
        {
            w += 1;
        }
        else
        {
            w += 2;
        }
    }
    cout << w << endl;
}