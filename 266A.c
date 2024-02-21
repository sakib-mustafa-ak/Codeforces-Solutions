#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[100];
    scanf("%s",&a);
    int count = 0;
    for (int i = 1; i < n; i++){
        if (a[i]==a[i-1]){
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
