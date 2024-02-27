#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        n--;
        m--;
        count++;
        if (n <= 0 || m <= 0)
            break;
    }
    if (count % 2 == 0)
        cout << "Malvika" << endl;
    else if (count % 2 == 1)
        cout << "Akshat" << endl;
}