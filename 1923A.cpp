#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count++;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (a[i] == 0)
            {
                count--;
            }
            else if (a[i] == 1)
            {
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0)
            {
                count--;
            }
            else if (a[i] == 1)
            {
                break;
            }
        }
        cout << count << endl;
    }
}