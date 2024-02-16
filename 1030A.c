#include<stdio.h>
int main(){
    int n ,count = 0;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d",&a[i]);
        if (a[i]==1){
            count++;
        } 
    }
    if (count>0){
        printf("HARD\n");
    } else {
        printf("EASY\n");
    }
    return 0;
}