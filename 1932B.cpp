#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        int x = 0;
        for (int i = 0; i < n; i++){
            x=max(x,(x+a[i]-(x%a[i])));
        }
        printf("%d\n",x);
    }
    return 0;
}