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
    int n,k; cin>>n>>k;

    std::vector<int> a(n);
    for(auto &i:a)
    	cin>>i;

    int tot = 0;
    for (int i = 0; i < n; )
    {
    	if(a[i]==1){
    		i++;
    		continue;
    	}

    	int idx = i;
    	while(i<n and a[i]==0){
    		i++;
    	}

    	int len = i - idx;
    	if(len>=k)
    		tot += (len-k)/(k+1) +1;

    }

    cout<<tot<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
