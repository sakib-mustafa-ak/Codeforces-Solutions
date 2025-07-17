#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
#define pb push_back
#define pr pair<int,int>

void solve(){
    int n; cin>>n;
    n/=2;
    if(n==1 or n%2!=0) cout<<"NO\n";
    else{
    	cout<<"YES\n";
    	for (int i = 0; i < n; ++i)
    		cout<<2*i+2<<" ";
    	for (int i = 0; i < n-1; ++i)
    		cout<<2*i+1<<" ";
    	cout<<2*(n-1)+1+n<<endl;
    }
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}