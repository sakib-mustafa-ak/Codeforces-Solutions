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
    int n; cin>>n;
    int mx = INT_MIN,mn = INT_MAX;
    std::vector<int> a(n),p(n),s(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(a[i]<mn)
    		mn=a[i];
    	if(a[i]>mn)
    		p[i]=0;
    	else
    		p[i]=1;
    }
    for (int i = n-1; i >= 0; --i)
    {
    	if(a[i]>mx)
    		mx=a[i];
    	if(a[i]<mx)
    		s[i]=0;
    	else
    		s[i]=1;
    }

    for (int i = 0; i < n; ++i)
    {
    	if(p[i] or s[i])
    		cout<<1;
    	else
    		cout<<0;
    }
    cout<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
