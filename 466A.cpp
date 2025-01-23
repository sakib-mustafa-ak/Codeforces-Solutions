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
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int x = a*n;
    int y = (n/m)*b+min(b,(n%m)*a);
    cout<<min(x,y)<<endl;
}

signed main(){
    Start
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}