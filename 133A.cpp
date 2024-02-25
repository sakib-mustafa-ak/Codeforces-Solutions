#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[101];
    cin >> a;
    int b = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == 'H' || a[i] == 'Q' || a[i] == '9')
        {
            cout << "YES" << endl;
            b++;
            break;
        }
    }
    if (b == 0)
    {
        cout << "NO" << endl;
    }
}