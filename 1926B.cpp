#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int y=0,z=0;
        
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
        }
        int ones;
        for (int i = 0; i < n; i++)
        {
            if (a[i]>0)
            {
                ones = a[i];
                if (ones-a[i+1]==0)
                {
                    printf("SQUARE\n");
                    break;
                } else {
                    printf("TRIANGLE\n");
                    break;
                } 
            } 
        }  
    }
}