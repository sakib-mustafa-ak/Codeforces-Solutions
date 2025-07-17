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
    int n,x,odd=0,eve=0;
    cin>>n>>x;
    vector<int> a(n);
    for(auto &i : a){
    	cin>>i;
    	if(i%2==1)
    		odd++;
    	else
    		eve++;
    }
    int xx = x - min(x,eve);
    if(xx %2 == 0)
    	xx++;
    cout<<((odd>=xx and xx <=x)? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}