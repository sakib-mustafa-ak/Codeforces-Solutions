#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> prime;
    int result = 0;

    for (int i = 2; i <= n; i++)
    {
        int count = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 0)
        {
            prime.push_back(i);
        }
    }
    int n2 = prime.size();
    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 0; j < n2; j++)
        {
            if (i % prime[j] == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            result++;
        }
    }
    cout << result << endl;
}