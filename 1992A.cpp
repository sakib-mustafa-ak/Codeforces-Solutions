#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a(3);
        cin >> a[0] >> a[1] >> a[2];
        int x = 5;
        while (x)
        {
            --x;
            sort(a.begin(), a.end());
            a[0]++;
        }
        cout << a[0] * a[1] * a[2] << endl;
    }
}