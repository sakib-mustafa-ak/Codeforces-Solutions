#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int day = 0;
    int i = 1;
    while (n--)
    {
        day++;
        if (day >= m * i)
        {
            n++;
            i++;
        }
    }
    cout << day << endl;
}