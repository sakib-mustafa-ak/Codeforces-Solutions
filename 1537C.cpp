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
    vector<int> a(n);
    for(auto &i:a)
    	cin>>i;
    sort(all(a));
    if(n==2){
    	cout<<a[0]<<" "<<a[1]<<endl;
    	return;
    }
    int mn = INT_MAX, mni;
    for (int i = 1; i < n; ++i)
    {
    	if(a[i]-a[i-1]<mn)
    		mn = a[i]-a[i-1],mni=i;
    }
    for (int i = mni; i < n; ++i)
    	cout<<a[i]<<" ";
    for (int i = 0; i < mni; ++i)
    	cout<<a[i]<<" ";
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