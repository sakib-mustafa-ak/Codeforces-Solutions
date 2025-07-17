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
    vector<int> ans;
    int power = 1;
    while(n>0){
    	if(n%10>0)
    		ans.push_back((n%10)*power);
    	n/=10;
    	power *= 10;
    }
    cout<<ans.size()<<endl;
    for(auto i : ans)
    	cout<<i<<" ";
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