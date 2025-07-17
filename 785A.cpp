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
    int ans = 0 ; 
    for (int i = 0; i < n; ++i)
    {
    	string s; cin>>s;
    	if(s == "Tetrahedron") ans += 4;
    	if(s == "Cube") ans += 6;
    	if(s == "Octahedron") ans += 8;
    	if(s == "Dodecahedron") ans += 12;
        if(s == "Icosahedron") ans += 20;
    }
    cout<<ans<<endl;
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}	