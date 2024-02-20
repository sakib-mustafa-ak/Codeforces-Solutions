#include<stdio.h>
int main(){
    char a[10000];
    gets(a);
    int x = a[0];
    if (x>96&&x<123)
    {
        a[0]-=32;
    }
    printf("%s",a);
}