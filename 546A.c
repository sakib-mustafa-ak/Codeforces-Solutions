#include <stdio.h>
int main()
{
    long long k, n, w;
    scanf("%lld%lld%lld", &k, &n, &w);
    long long c, total = 0;
    for (int i = 1; i <= w; i++)
    {
        c = k * i;
        total += c;
    }
    if (total > n)
    {
        printf("%lld\n", total - n);
    }
    else
    {
        printf("0\n");
    }
}