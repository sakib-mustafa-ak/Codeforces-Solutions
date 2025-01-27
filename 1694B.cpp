#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

void solve(){
	int n;
	string s;
	cin>>n>>s;

	int ans = n;
	for (int i = 0; i < n -1; ++i)
	{
		if((s[i]=='1'&& s[i+1] == '0')|| (s[i]=='0' && s[i+1] == '1'))
			ans++;
	}
	
	for (int i = 0; i < n; ++i)
	{
		if((s[i-1] == '1' && s[i] == '0')||(s[i-1] == '0' && s[i] == '1')){
			int piche = i-1;
			ans += piche;
		}
	}
	cout<<ans<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}

