#include<stdio.h>
int main(){
    int n , a , b , c , p = 0 ;
    scanf("%d",&n);
    while (n--){
        scanf("%d%d%d",&a,&b,&c);
        if ((a+b+c) >= 2){
            p++;
        }
        
    }
    printf("%d\n",p);
    return 0;
}