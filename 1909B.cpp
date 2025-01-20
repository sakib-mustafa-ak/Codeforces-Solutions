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
    int n,odd = 0 , even = 0; cin>>n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(a[i]%2)
    		odd++;
    	else
    		even++;
    }
    if(odd && even)
    	cout<<2<<endl;
    else{
    	int p = a[0],q = a[0];
	    for (int i = 1; i < n; i++) {
	      p &= a[i];
	      q |= a[i];
	    }
	    p ^= q;
	    int cnt = 0;
	    while ((p & 1) == 0) {
	      p >>= 1;
	      cnt++;
	    }
	    cout << (2LL<<cnt) << endl;
    }
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}