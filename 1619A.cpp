#include <stdio.h>
#include <string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char s[101];
        scanf("%s", s);
        int len = strlen(s);
        if (len % 2 != 0)
        {
            printf("NO\n");
        }
        else
        {
            int len2 = len / 2;
            int valid = 1;

            for (int i = 0; i < len2; i++)
            {
                if (s[i] != s[i + len2])
                {
                    valid = 0;
                    break;
                }
            }

            if (valid)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}