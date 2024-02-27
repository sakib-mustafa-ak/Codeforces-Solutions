// unfinished

#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, l;
        cin >> a >> b >> l;
        int count = 0;
        for (int x = 0; x <= 1000; x++)
        {
            for (int y = 0; y <= 1000; y++)
            {
                int k = l / (pow(a, x) * pow(b, y));
                if (k * pow(a, x) * pow(b, y) == l)
                {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
}