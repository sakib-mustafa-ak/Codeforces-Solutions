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
    std::vector<int> a(n);
    int zero = 0,sum=0;
    for(auto &i:a){
    	cin>>i;
    	sum+=i;
    	if(!i)
    		zero++;
    }

    if(zero)
    	cout<<sum+zero<<endl;
    else
    	cout<<sum<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
