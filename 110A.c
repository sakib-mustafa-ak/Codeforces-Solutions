#include <stdio.h>

int main()
{
    char a[20];
    gets(a);
    long long count = 0;
    for (long long i = 0; i < 20; i++)
    {
        if (a[i] == '4' || a[i] == '7')
        {
            count++;
        }
    }
    if (count == 4 || count == 7)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
}