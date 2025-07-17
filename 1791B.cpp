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
    string s; cin>>s;
    int x = 0, y = 0;
    for(auto c:s){
    	if(c =='L') x--;
    	else if(c == 'R') x++;
    	else if(c == 'U') y++;
    	else y--;
    	if(x == 1 and y == 1){
    		cout<<"YES\n";
    		return;
    	}
    }
    cout<<"NO\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}