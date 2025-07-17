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
    int n; cin>>n;
    std::vector<int> a(n);
    for(auto &i:a)
    	cin>>i;
    int flag = 1;
    for (int i = 0; i < n and flag; ++i)
    {
    	for (int j = i+1; j < n; ++j)
    	{
    		if(a[i]>a[j]){
    			cout<<"YES\n2\n"<<a[i]<<" "<<a[j]<<endl;
    			flag = 0;
    			break;
    		}
    	}
    }
    if(flag)
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
