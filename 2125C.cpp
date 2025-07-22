#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

int prime[] = {2,3,5,7};

int cnt(int n){
	if(n==0) return 0;

	int ans = 0;
	for (int i = 0; i < (1<<4); ++i)
	{
		int deno = 1;
		int num = 0;
		for (int j = 0; j < 4; ++j)
		{		
			if((i>>j) & 1){
				deno *= prime[j];
				num++;
			}
		}
		if(num%2) ans -= n/deno;
		else ans += n/deno;
	}

	return ans;
}
void solve(){
    int l,r; cin>>l>>r;

    int ans = cnt(r) - cnt(l-1);
    cout<<ans<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
