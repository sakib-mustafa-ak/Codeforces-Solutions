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
    int n,a=0,b=0; cin>>n;
    string s; cin>>s;
    for (int i = 1; i < n; ++i)
    {
        if(s[i]=='A')
            a+=i+1;
        else
            b+=i+1;
    }
    // if(s[0]=='A')
    //     a+=n+1;
    // else
    //     b+=n+1;
    cout<<(a>b? "Alice\n":"Bob\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
