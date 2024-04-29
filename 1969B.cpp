#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int ans = 0, count = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                count++;
            }
            if (s[i] == '0' && count > 0)
            {
                ans += count + 1;
            }
        }
        cout << ans << endl;
    }
}
/*int ans = 0;
        for (int i = 0; i < a.size()-1; i++)
        {
            if(a[i+1]-a[i]>1)
            {
                ans += (a[i+1]-a[i]-1)*2;
            }
        }*/