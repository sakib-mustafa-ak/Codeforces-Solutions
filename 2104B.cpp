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
    int n,mx=-1,sum=0; cin>>n;
    vector<int> a(n);
    vector<pair<int,int>> ans;
    ans.push_back({0,0});
    for(auto &i:a){
        cin>>i;
        sum+=i;
        mx = max(mx,i);
        ans.push_back({mx,sum});
    }
    for(int i = ans.size()-1; i > 0 ;i--){
        cout<<max(ans[ans.size()-1].ss-ans[i-1].ss,ans[ans.size()-1].ss-ans[i].ss+ans[i].ff)<<" ";

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
