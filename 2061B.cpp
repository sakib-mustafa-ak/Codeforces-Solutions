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
    map<int,int> mp;
    for (int i = 0; i < n; ++i)
    {
    	int x ; cin>>x;
    	mp[x]++;
    }
    map<int,int>::iterator it = mp.begin();
    while(it != mp.end()){
    	if(it.ss == 4){
    		cout<<it.ff<<" "<<it.ff<<" "<<it.ff<<" "<<it.ff<<endl;
    		return;
    	}
    	else if(it.ss == 3){
    		int x = it.ff*3-1;
    		while(!mp[x]&&x>0){
    			--x;
    		}
    		if(mp[x])
    			cout<<it.ff<<" "<<it.ff<<" "<<it.ff<<" "<<x<<endl;
    			return;
    	}
    	else if(it.ss == 2){
    		iterator it2 = it;
    		while(it2 != mp.end()){
    			if(it2.ss==2){
    				cout<<it.ff<<" "<<it.ff<<" "<<it2.ff<<" "<<it2.ff<<endl;
    				return;
    			}
    			++it2;
    		}
    	}
    	++it;
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