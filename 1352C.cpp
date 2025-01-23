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
    int n , k ;
    cin>>n>>k;
    int x = k/n;
    int y = k%n + x;
    int ans = k+x;
   	while(y/n!=0){
   		x = y/n;
   		y = y%n + x;
   		ans+=x;
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