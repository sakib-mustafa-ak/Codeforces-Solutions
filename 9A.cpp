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
    int a,b;
    cin>>a>>b;
    int mx = max(a,b);
    int x = (6-mx)+1;
    if(x==4)
    	cout<<"2/3\n";
    else if(6%x==0)
    	cout<<"1/"<<6/x<<endl;
    else
    	cout<<x<<"/"<<6<<endl;
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}