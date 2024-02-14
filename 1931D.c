#include<stdio.h>
int main(){
    int t,n,x,y;
    scanf("%d",&t);
    while (t--){
        scanf("%d%d%d",&n,&x,&y);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        int count = 0;
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                if (i==j){
                    break;
                } else if ((a[i]+a[j])%x == 0 && (a[i]-a[j])%y == 0){
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    
    return 0;
} //Time limit exceeded 