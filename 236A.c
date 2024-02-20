#include<stdio.h>
#include<string.h>
int main(){
    char a[200];
    gets(a);
    int count = 0,x = strlen(a);
    for (int i = 97; i <= 122; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (a[j]==i)
            {
                count++;
                break;
            }
            
        }
        
    }
    if (count%2==0)
    {
        printf("CHAT WITH HER!\n");
    } else {
        printf("IGNORE HIM!\n");
    }
    return 0;
}