#include<stdio.h>
int main(){
    int t , n ;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        int e[n] , i , c;
        for (i = 0; i < n; i++){
            scanf("%d",&e[i]);
        }
        for (i = 0; i < n; i++){
            for (int j = 0; j < n-i-1; j++){
                if (e[j]>e[j+1]){
                    int temp = e[j];
                    e[j] = e[j+1];
                    e[j+1] = temp;
                }
            }
        }
        int g = 0, s = 0;
        for ( i = 0; i < n; i++){
            s++;
            if (s>=e[i]){
                g++;
                s = 0;
            }
        }
        printf("%d\n",g);
    }
    return 0;
} //Time limit exceeded on test 2