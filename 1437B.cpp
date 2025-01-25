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
    int n,c=1;
    string s;
    cin>>n>>s;
    for (int i = 1; i < n; ++i)
    {
    	if(s[i]==s[i-1])
    		c++;
    }
    cout<<((n>2)? c/2:0 )<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}