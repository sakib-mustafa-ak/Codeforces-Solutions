#include <stdio.h>
#include <string.h>
int main()
{
    char a[110];
    gets(a);
    int l = 0, u = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 97 && a[i] <= 123)
        {
            ++l;
        }
        else if (a[i] >= 65 && a[i] <= 90)
        {
            ++u;
        }
    }
    if (l >= u)
    {
        printf("%s\n", strlwr(a));
    }
    else if (l < u)
    {
        printf("%s\n", strupr(a));
    }
}