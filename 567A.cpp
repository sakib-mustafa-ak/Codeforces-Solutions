#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int j = 0; j < n; j++)
    {
        cin >> a[j];
    }
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << a[i + 1] - a[i] << " " << a[n - 1] - a[i];
        }
        else if (i == n - 1)
        {
            cout << a[i] - a[i - 1] << " " << a[i] - a[0];
        }
        else
        {
            cout << min(a[i] - a[i - 1], a[i + 1] - a[i]) << " " << max(a[n - 1] - a[i], a[i] - a[0]);
        }
        cout << endl;
    }
}