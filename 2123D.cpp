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
	int n,k,one = 0; cin>>n>>k;
	string s; cin>>s;
	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='1')
			one++;
	}
	if(one<=k or 2*k>n)
		cout<<"Alice\n";
	else
		cout<<"Bob\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
