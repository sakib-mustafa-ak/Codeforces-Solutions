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
    vector<int> a(n);
    map<int,int> mp,mp2;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	mp[a[i]]++;
    }
    int next = 0;
    for (int i = 0; i < n; ++i)
    {
    	mp[a[i]]--;
    	if(a[i]>next)
    		mp2[a[i]]++;
    	if(a[i] == next)
    		next++;
    	while(mp2[next]>0){
    		mp2[next]--;
    		next++;
    		if(mp[next-1]==0){
    			cout<<-1<<endl;
    			return;
    		}
    	}

    	if(a[i] < next && mp[a[i]] == 0){
    		cout<<-1<<endl;
    		return;
    	}

    	if(mp[next] == 0 && mp2[next] == 0){
    		cout<<2<<endl;
    		cout<<1<<" "<<i+1<<endl<<i+2<<" "<<n<<endl;
    		return;
    	}
    }
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
