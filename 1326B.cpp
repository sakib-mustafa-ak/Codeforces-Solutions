#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = a[0], mx = 0;
    cout << a[0] << " ";
    for (int i = 1; i < n; i++)
    {
        mx = max(mx, sum);
        sum = mx + a[i];
        cout << sum << " ";
    }
    cout << "\n";
}