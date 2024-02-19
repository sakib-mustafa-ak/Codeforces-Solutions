#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        char a[10];
        scanf("%s",&a);
        int x=0 , y=0 ;
        for (int i = 0; i < 5; i++)
        {
            if (a[i]=='A')
            {
                x++;
            }
            
        }
        for (int i = 0; i < 5; i++)
        {
            if (a[i]=='B')
            {
                y++;
            }
            
        }
        if(x>y){
            printf("A\n");
        } else {
            printf("B\n");
        }
    }
    
}