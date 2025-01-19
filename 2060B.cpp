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
    int n , m;
    cin>>n>>m;
    int ans = 0;

    vector<int> x(m);
    std::vector<pair<int,int>> a;
    for (int i = 0; i < n; ++i){
    	int even = 0 , odd = 0;
    	for (int j = 0; j < m; ++j){
    		cin>>x[j];
    		if(j>0){
    			if(abs(x[j]-x[j-1])%n!=0)
    				ans=-1;
    		}
    	}
    	a.push_back({*min_element(all(x)),i+1});
    }
    
    if(ans==-1)
    	cout<<ans<<endl;
    else{
    	sort(all(a));
    	for(auto v:a)
    		cout<<v.ss<<" ";
    	cout<<endl;
    } 
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}