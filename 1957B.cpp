#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, num = 1, flag;
        cin >> n >> k;
        for (int i = 0; i < n - 1; i++)
        {
            k -= num;
            cout << num << " ";
            num *= 2;
            if (num > k)
            {
                flag = i;
                break;
            }
        }
        if (flag != n - 2)
        {
            for (int i = flag; i < n - 1; i++)
            {
                k -= 1;
                cout << "1 ";
            }
        }

        cout << k << endl;
    }
}