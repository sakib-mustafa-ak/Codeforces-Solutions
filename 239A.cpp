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
    int y,k,n;
    cin>>y>>k>>n;
    vector<int> a;
    int x = n/k;
    for (int i = x*k; i > y; i-=k)
    	a.push_back(i-y);
    if(!a.size()){
    	cout<<"-1\n";
    	return;
    }
    for (int i = a.size()-1; i >=0; --i)
    	cout<<a[i]<<" ";
    cout<<endl;
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}