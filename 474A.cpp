#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    cin >> a;
    char s[101], k[31] = "qwertyuiopasdfghjkl;zxcvbnm,./";
    cin >> s;
    if (a == 'L')
    {
        for (int i = 0; i < strlen(s); i++)
        {
            for (int j = 0; j < strlen(k); j++)
            {
                if (s[i] == k[j])
                {
                    cout << k[j + 1];
                }
            }
        }
    }
    else
    {
        for (int i = 0; i < strlen(s); i++)
        {
            for (int j = 0; j < strlen(k); j++)
            {
                if (s[i] == k[j])
                {
                    cout << k[j - 1];
                }
            }
        }
    }
}