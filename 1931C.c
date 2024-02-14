#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 1; i <= n; i++) {
            scanf("%d", &a[i]);
        }
        int x = 0, y = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i] == a[1]) {
                x++;
            } else
                break;
        }
        for (int i = n; i > x; i--) {
            if (a[i] == a[n]) {
                y++;
            } else
                break;
        }
        if (a[1] == a[n]) {
            printf("%d\n", n - x - y);
        } else {
            if (x > y) {
                printf("%d\n", n - x);
            } else {
                printf("%d\n", n - y);
            }
        }
    }
    return 0;
}
