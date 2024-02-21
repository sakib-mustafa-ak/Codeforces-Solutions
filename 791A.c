#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    int y = 0;
    for (int i = 0; i < 100; i++)
    {
        y++;
        a = 3 * a;
        b = 2 * b;
        if (a > b)
        {
            break;
        }
    }
    printf("%d", y);
    return 0;
}