#include<stdio.h>
int main(){
    int t,n,x;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        int a[n],sum=0;
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        x = sum/n;
        int y = 0, possible = 1;
        for (int i = 0; i < n; i++){
            if (a[i]>x){
                y = y + (a[i]-x);
            } else if (a[i]<x){
                if (y<x-a[i]){
                    --possible;
                    break;
                } else {
                    y = y - (x-a[i]);
                }
            }
        }
        if (possible==1){
            printf("Yes\n");
        } else {
            printf("No\n");
        }   
    }
    return 0;
}