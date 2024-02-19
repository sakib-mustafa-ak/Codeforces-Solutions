#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long b,d,s;
    scanf("%lld%lld%lld",&b,&d,&s);
    long long x = max(b,d);
    long long mx = max(x,s);
    long long count = 0;
    if(mx-b-1>0){
        count = mx-b-1;
    } else if(mx-d-1>0){
        count = count + (mx-d-1);
    } else if(mx-s-1>0){
        count = count + (mx-s-1);
    }
    printf("%lld\n",count);
    return 0;
}