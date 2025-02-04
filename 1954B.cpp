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
    int n;
    cin>>n;
    vector<int> a(n);
    map<int,int> s;
    for (int i = 0; i < n; ++i){
        cin>>a[i];
        s[a[i]]++;
    }
    if(s.size() == 1){
        cout<<"-1"<<endl;
        return;
    }

    int ans = INT_MAX,c=0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i] == a[0])
            c++;
        else{
            ans=min(ans,c);
            c=0;
        }
    }
    if(c)
        ans = min(ans,c);
    cout<<ans<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}