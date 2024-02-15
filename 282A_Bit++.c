#include<stdio.h>
int main(){
    int n,X=0;
    scanf("%d",&n);
    while (n--){
        char a[3];
        scanf("%s",&a);
        if (a[0]=='+' && a[2]=='+'){
            X++;
        } else if (a[0]=='-' && a[2]=='-'){
            X--;
        }
    }
    printf("%d\n",X);
    return 0;
}