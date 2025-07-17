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
    int n,cnt=0; cin>>n;
    while(n--){
    	int a,b;
    	cin>>a>>b;
    	if(a>b) cnt++;
    	else if(a<b) cnt--;
    }
    if(cnt > 0) cout<<"Mishka\n";
    else if(cnt<0) cout<<"Chris\n";
    else cout<<"Friendship is magic!^^\n";
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}