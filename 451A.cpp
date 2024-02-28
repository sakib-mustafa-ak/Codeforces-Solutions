#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count;
    cin >> n >> m;
    if (n > m)
        count = (n * m) / n;
    else
        count = (n * m) / m;

    if (count % 2 == 0)
        cout << "Malvika" << endl;
    else
        cout << "Akshat" << endl;
}