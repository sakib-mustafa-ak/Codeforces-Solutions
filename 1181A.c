#include<stdio.h>

int main(){
    long long x,y,z;
    scanf("%lld%lld%lld",&x,&y,&z);
    long long a , b , g = 0;
    a = x%z;
    b = y%z;
    if((a+b)>=z){
    if (a>=b){
        g = z - a ;
    } else {
        g = z - b;
    }
    }
    long long t;
    t = ((x+y)/z);

    printf("%lld %lld\n",t,g);
    return 0;
}