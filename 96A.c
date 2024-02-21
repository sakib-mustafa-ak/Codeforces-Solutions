#include <stdio.h>
#include <string.h>
int main()
{
    char a[105];
    gets(a);
    int zeros = 0, ones = 0, y = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] == '0')
        {
            zeros++;
            ones = 0;
            if (zeros >= 7)
            {
                printf("YES\n");
                y++;
                break;
            }
        }
        else
        {
            zeros = 0;
            ones++;
            if (ones >= 7)
            {
                printf("YES\n");
                y++;
                break;
            }
        }
    }
    if (y == 0 && ones < 7 && zeros < 7)
    {
        printf("NO\n");
    }
}