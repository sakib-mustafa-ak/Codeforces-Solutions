#include<stdio.h>
#include<string.h>
int main(){
    char a[100],b[100];
    scanf("%s%s",&a,&b);
    strlwr(a);
    strlwr(b);
    printf("%d\n",strcmp(a,b));
    return 0;
}