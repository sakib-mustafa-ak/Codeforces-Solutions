#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a;
    cin >> a;
    long long ones = 0, zeros = 0;

    for (long long i = 0; i < n; i++)
    {
        if (a[i] == '1')
        {
            ones++;
        }
        else
        {
            zeros++;
        }
    }
    cout << n - (2 * min(ones, zeros)) << endl;
    return 0;
}