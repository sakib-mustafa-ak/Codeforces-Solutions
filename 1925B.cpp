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
    int x,n;
    cin>>x>>n;

    int ans = 1;
    for(int i = 1; i <= sqrt(x) ; i++){
        if(x%i == 0 && x/i >= n)
            ans = max(ans,i);
        if(x%i == 0 && i>=n)
            ans = max(ans,x/i);
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
