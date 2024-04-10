#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, min = 100, pmax = n, pmin = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == max && pmax > i)
            pmax = i;
        if (a[i] == min && pmin < i)
            pmin = i;
    }
    pmax += 1;
    pmin += 1;
    (pmax > pmin) ? cout << (pmax - 1) + (n - (pmin + 1)) << endl : cout << (pmax - 1) + (n - pmin) << endl;
}