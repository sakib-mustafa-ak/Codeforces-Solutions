#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[4], b, count = 0;
    for (int i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i % a[j] == 0)
            {
                count++;
                break;
            }
        }
    }
    cout << count << endl;
}