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
    int n,sum = 0, ans = 0;
    cin>>n;
    vector<int> a(n),even,odd;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(a[i]%2==0)
    		even.push_back(a[i]);
    	else
    		odd.push_back(a[i]);
    }
    
    for(auto v : even){
        sum+=v;
        if(sum%2==0){
            ans++;
            while(sum%2==0)
                sum/=2;
        }
    }

    for(auto v : odd){
        sum+=v;
        if(sum%2==0){
            ans++;
            while(sum%2==0)
                sum/=2;
        }
    }

    cout<<ans<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}