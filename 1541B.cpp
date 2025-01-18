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
    int n,count = 0;
    cin>>n;
    vector<pair<int,int>> a(n);
    for(int i = 0 ; i < n ; i++){
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(all(a));
    int high = n+n-1;
    for(int i = 0; i < n; ++i)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[i].ff*a[j].ff>high)
                break;
            if(a[i].ff*a[j].ff==a[i].ss+a[j].ss)
                count++;            
        }
    }
    cout<<count<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}