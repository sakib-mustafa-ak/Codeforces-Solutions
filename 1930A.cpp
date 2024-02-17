#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int nn = 2*n;
        long long a[nn];
        for (int i = 0; i < nn; i++){
            scanf("%lld",&a[i]);
        }
        long long score = 0;
        sort(a,a+nn);
        for (int i = 0; i < nn; i+=2){
            if (a[i]<=a[i+1]){
                score += a[i];
            } else if (a[i]>a[i+1]){
                score += a[i+1];
            }
        }
        printf("%lld\n",score);
    }
    
}