#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max = 0, num = 0;
    cin >> n;
    string s, maxs;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        string a = {s[i], s[i + 1]};
        for (int j = 0; j < n - 1; j++)
        {
            string b = {s[j], s[j + 1]};
            if (b == a)
            {
                num++;
            }
        }
        if (max < num)
        {
            max = num;
            maxs = a;
        }
        num = 0;
    }
    cout << maxs << endl;
}