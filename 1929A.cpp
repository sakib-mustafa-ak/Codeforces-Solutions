#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t , n ;
    scanf("%d",&t);
    while (t--){
        scanf("%d",&n);
        int a[n];
         
        for (int i = 0; i < n; i++){
            scanf("%d",&a[i]);
        }
        sort(a, a + n);
        int sum = 0;
        for (int i = 1; i < n; i++){
            sum += (a[i]-a[i-1]); 
        }
        
        printf("%d\n",sum);
    }
    
    return 0;
}