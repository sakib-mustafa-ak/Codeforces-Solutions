#include <stdio.h> // ERROR , TLE , Have to fix

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);
        long long x = 0; 
        for (int i = 1; i <= n; i++) {
            int a = i;
            int y = 0;
            while (a > 0) {
                y += a % 10;
                a /= 10;
            }
            x += y;
        }
        printf("%lld\n", x);
    }

    return 0;
}
