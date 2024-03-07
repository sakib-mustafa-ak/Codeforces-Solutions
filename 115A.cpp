// unfinished

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int count = 0;
    for (int i = -1; i <= n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[j] == i)
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
}
int main()
{
    solve();
}