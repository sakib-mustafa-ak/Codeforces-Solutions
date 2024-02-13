#include<stdio.h>
int main(){
    int n,X=0;
    char a;
    scanf("%d",&n);
    while (n--){
        scanf("%c",&a);
        X = a;
    }
    printf("%d\n",X);
    return 0;
}