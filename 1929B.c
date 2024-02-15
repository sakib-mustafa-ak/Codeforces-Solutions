#include<stdio.h>
int main(){
    int t , n , k ;
    scanf("%d",&t);
    while (t--){
        scanf("%d%d",&n,&k);
        int d,hk,cc = 0;
        d = n*2-1;
        hk = (k+1)/2;
        if (k<=d*2-2){
            cc+=hk;
        } else if (k>d*2-2){
            cc=d-1+(k-(d*2-2));
        }
        printf("%d\n",cc);
    }
    return 0;
}