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
    vector<int> a(n),b;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        b.push_back(a[i]);
        if(i)
            a[i]+=a[i-1];     
    }
    sort(all(b));
    for (int i = 1; i < n; ++i)
        b[i]+=b[i-1];

    int q ; cin>>q;
    while(q--){
        int x,l,r;
        cin>>x>>l>>r;
        if(x==1)
            cout<<a[r-1] - ((l-1)? a[l-2]:0)<<endl;
        else
            cout<<b[r-1] - ((l-1)? b[l-2]:0)<<endl;
    }
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}