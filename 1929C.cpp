#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int k, x, a;
        scanf("%d %d %d", &k, &x, &a);
        int temp = a;
        for (int i = 1; i<=k ; i++){
            a=a-x*i;
            if (a<=0){
                printf("No\n");
                break;
            }
            a=a+(1+i)*(k-1);
            if (a>temp){
                printf("Yes\n");
                break;
            } 
        } if (a<temp){
        printf("No\n");
        }
    }

    return 0;
}
/*#include<bits/stdc++.h>
using namespace std;
 
const int N = 2e5 + 10;
 
 
int main()
{
	int t;
	cin >> t;
	while(t --)
	{
		int flag = 0;
		long long a , b , c;
		cin >> a >> b >> c;
		long long sum;
		sum = 0;
		int p = 1;
			for(long long i = 1 ; i <= b ; ++ i)
				{
					sum += p;
					p = sum / (a - 1) + 1;
					if(sum > c)
					{
						cout << "NO" << endl;
						break;
					}
				}
		if(sum > c) continue;
		if(sum <= c && c < a * (c - sum))
		flag = 1;
		if(flag == 1) cout << "YES" <<endl;
		else cout << "NO" << endl;
		
	}
 
}*/