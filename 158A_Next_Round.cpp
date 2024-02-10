#include<stdio.h>
int main(){
    int n , k , x = 0 ;
    scanf("%d%d",&n,&k);
    int a[n] ;
    int i ;
    for ( i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i < n; i++){
        int kth = a[k-1];
        if (a[i] >= kth && a[i]>0){
            x++;
        }
    }
    printf("%d\n",x);
    return 0;
}