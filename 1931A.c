#include<stdio.h>
int main(){
    int t , n ;
    int a , b , c ;

    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        if (n>=3&&n<=28){
            a=1;
            b=1;
            c=n-2;
        } else if (n>=29&&n<=53){
            a=1;
            b=n-26-1;
            c=26;
        } else if (n>=54&&n<=78){
            a=n-52;
            b=26;
            c=26;
        }
        printf("%c%c%c\n",96+a,96+b,96+c);
        
    }
    
    return 0;
}