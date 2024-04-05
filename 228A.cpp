#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long arr[4];
    for (long long i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < 3; i++)
    {

        for (long long j = i + 1; j < 4; j++)
        {
            if (arr[i] == arr[j])
                arr[j] = 0;
        }
    }
    int ans = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] == 0)
            ans++;
    }

    cout << ans << endl;
}