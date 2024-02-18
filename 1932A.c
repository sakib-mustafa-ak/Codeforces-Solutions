#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        char a[n];
        scanf("%s",&a);
        int coin = 0;
        for (int i = 0; i < n; i++){
            if(a[i]=='@'){
                coin++;    
            }
            if (a[i]=='*'&&a[i+1]=='*'){
                    break;
            }
        }
        printf("%d\n",coin);
    }
    
}