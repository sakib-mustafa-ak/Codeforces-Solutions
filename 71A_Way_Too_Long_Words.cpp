#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    int n;
    scanf("%d",&n);
    while (n--){
        scanf("%s",&s);
        int x = strlen(s);
        if (x > 10){
            printf("%c%d%c\n",s[0],(x-2),s[x-1]);
        } else {
            printf("%s\n",s);
        }
    }
    
    return 0;
}
