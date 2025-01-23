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
    int n,l;
     cin>>n>>l;
     vector<int> a(n);
     for(int i = 0 ; i<n ; i++)
     	cin>>a[i];
     sort(all(a));
     int mx=0;
     for(int i = 1 ; i<n ; i++)
     	mx = max(mx,a[i]-a[i-1]);
     double ans = mx/2.0;
     double ans2 = (a[0]-0>=l-a[n-1])? a[0]-0:l-a[n-1];
     cout<<fixed << setprecision(10)<<((ans>=ans2)? ans:ans2)<<endl;
}

signed main(){
    Start
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}