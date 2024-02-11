#include<stdio.h>
int main(){
    long long v , c , n , m , t ,x;
    scanf("%lld",&t);
    while (t--){
        scanf("%lld%lld%lld%lld",&v,&c,&n,&m);
        if (v>c&&c>=m&&(c-m+v)>=n){
            printf("Yes\n");
        } else if (v<c&&v>=m&&(v-m+c)>=n){
            printf("Yes\n");
        } else if (v==c&&v>=m&&(v-m+c)>=n){
            printf("Yes\n");
        } else {
            printf("No\n");
        }      
    }
    return 0;
}