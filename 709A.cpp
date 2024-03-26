#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int o[n];
    for (int i = 0; i < n; i++)
    {
        cin >> o[i];
    }
    int waste = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (o[i] <= b)
        {
            waste += o[i];
        }
        if (waste > d)
        {
            count++;
            waste = 0;
        }
    }
    cout << count << endl;
}