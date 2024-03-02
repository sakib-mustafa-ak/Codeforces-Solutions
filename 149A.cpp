#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;

    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    int month = 0, sum = 0;

    for (int i = 11; i >= 0; i--)
    {
        if (k == 0)
        {
            cout << month << endl;
            break;
        }
        sum += a[i];
        month++;
        if (sum >= k)
        {
            cout << month << endl;
            break;
        }
    }
    if (sum < k)
    {
        cout << "-1" << endl;
    }
}