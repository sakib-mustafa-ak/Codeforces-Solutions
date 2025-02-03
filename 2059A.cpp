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
    int n;
    cin>>n;
    map<int,int> mp1,mp2;
    for (int i = 0; i < n; ++i){
    	int x;
    	cin>>x;
    	mp1[x]++;
    }

    for (int i = 0; i < n; ++i){
    	int x;
    	cin>>x;
    	mp2[x]++;
    }

    int x = mp1.size();
    int y = mp2.size();

    if((x>=2&&y>=2)||(x>=3&&y==1)||(x==1&&y>=3))
    	cout<<"YES\n";
    else cout<<"NO\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}