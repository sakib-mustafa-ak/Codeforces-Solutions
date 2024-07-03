#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, X = 0;
    cin >> n;
    while (n--)
    {
        char a[4];
        scanf("%s", &a);
        if (a[0] == '+' || a[2] == '+')
            X++;
        else if (a[0] == '-' || a[2] == '-')
            X--;
    }
    cout << X;
}