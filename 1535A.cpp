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
    vector<int> a(4);
    for (int i = 0; i < 4; ++i)
    	cin>>a[i];

    int m1 = max(a[0],a[1]);
    int m2 = max(a[2],a[3]);
    if(m1>m2)
    	swap(m1,m2);
    sort(all(a));
    if(a[2] ==m1 and a[3]==m2)
    	cout<<"YES\n";
    else
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