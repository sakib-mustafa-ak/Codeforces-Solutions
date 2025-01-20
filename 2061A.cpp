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
    int n,even = 0, odd = 0;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(a[i]%2==0)
    		even++;
    	if(a[i]%2==1)
    		odd++;
    }
    if(even>0)
    cout<<1+odd<<endl;
	else
		cout<<0<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}