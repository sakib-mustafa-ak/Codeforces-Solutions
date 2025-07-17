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
    int n,k,even=0,ans=INT_MAX; cin>>n>>k;
    std::vector<int> a(n);
    int pro =1;
    for(auto &i:a){
    	cin>>i;
    	if(i%2==0)
    		even++;
    	if(i%k==0)
    		ans=0;
    	ans=min(ans,k-(i%k));
    }
    
    if(k==4){
    	if(even>=2)
    		ans=min(ans,0LL);
    	else if(even==1)
    		ans=min(ans,1LL);
    	else if(even==0)
    		ans = min(ans,2LL);
    }
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
