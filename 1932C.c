#include <stdio.h> //wrong answer , have to fix.
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        long long n, m;
        scanf("%lld%lld", &n, &m);
        int a[n];

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        char b[n];
        scanf("%s", &b);
        for (int j = 0; j < n; j++)
        {
            long long multi = 1;
            for (int i = 0; i < n - j; i++)
            {
                multi *= a[i];
            }
            long long x = multi % m;
            multi = 1;
            printf("%lld ", x);
            if (b[j] == 'L')
            {
                for (int i = 0; i < n - 1 - j; i++)
                {
                    a[i] = a[i + 1];
                }
            }
            else if (b[j] == 'R')
            {
                for (int i = 0; i < n - 1 - j; i++)
                {
                    a[i] = a[i];
                }
            }
        }
        printf("\n");
    }
}