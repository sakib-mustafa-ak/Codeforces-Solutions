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
        int a[n], sum = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        if (sum % 3 == 0)
        {
            cout << "0" << endl;
        }
        else if (sum % 3 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                if (a[i] % 3 == 1)
                {
                    count++;
                    break;
                }
            }
            if (count == 0)
            {
                cout << "2" << endl;
            }
            else if (count == 1)
            {
                cout << "1" << endl;
            }
        }
        else if (sum % 3 == 2)
        {
            cout << "1" << endl;
        }
    }
}