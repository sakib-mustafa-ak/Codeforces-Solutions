#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int k, x, a, n=0;
        scanf("%d %d %d", &k, &x, &a);
        long long bet = 0;
		for (int i = 0; i < x; i++){
			long long coins = bet/(k-1);
			while (coins*(k-1)<=bet){
				coins++;
			}
			bet+=coins;
			if (bet>=a){
				printf("NO\n");
				n++;
				break;
			}
		}
		if (k*(a-bet)>a){
			printf("YES\n");
		} else if (n==0){
			printf("NO\n");
		}
    }
    return 0;
}