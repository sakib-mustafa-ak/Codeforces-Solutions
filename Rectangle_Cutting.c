#include<stdio.h>
int main(){
    long a , b , t ;
    scanf("%ld",&t);
    while(t--){
        scanf("%ld%ld",&a,&b);
        if(a>1&&b>1){
            if(a%2 != 0 && b%2 != 0){
                printf("No\n");
            } else if (b%2 != 0 && a/2 == b){ 
                printf("No\n");
            }else if (a%2 != 0 && b/2 == a){ 
                printf("No\n");
            }else {
                printf("Yes\n");
            }
        } else {
            printf("No\n");
        }
    }
    return 0;
}