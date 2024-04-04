#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, sum = 0;
    cin >> n;
    sum = (n / 10) * 5;
    long long x = n % 10;
    for (long long i = n - x + 1; i <= n; i++)
    {
        (i % 2 == 0) ? sum += i : sum -= i;
    }

    cout << sum << endl;
}