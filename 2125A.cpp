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
    string s; cin>>s;

    int f,n,t;
    f=n=t=0;

    for(auto c:s){
    	if(c=='F') f++;
    	else if(c=='N') n++;
    	else if(c=='T') t++;
    	else cout<<c;
    }

    for (int i = 0; i < t; ++i)
    {
    	cout<<"T";
    }
    for (int i = 0; i < f; ++i)
    {
    	cout<<"F";
    }
    for (int i = 0; i < n; ++i)
    {
    	cout<<"N";
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
