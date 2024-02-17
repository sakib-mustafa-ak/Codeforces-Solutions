#include<stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int p[n];
        for (int i = 0; i < n; i++){
             if (i % 2 == 0) {
                p[i] = i / 2 + 1;
            } else {
                p[i] = n - i / 2;
            }
        }
        for (int i = 0; i < n; i++){
            printf("%d ",p[i]);
        }
        printf("\n");
    }
}