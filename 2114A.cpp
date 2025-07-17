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
    int x = sqrt(n);

    if(n==0){
    	cout<<0<<" "<<0<<endl;
    	return;
    }

    if(x*x == n){
    	cout<<1<<" "<<x-1<<endl;
    	return;
    }
    cout<<-1<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
