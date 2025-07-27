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
    int n,c; cin>>n>>c;
    std::vector<int> a(n);
    multiset<int> bag;
    for(auto &i:a){
    	cin>>i;
    	bag.insert(i);
    }

    int cost = 0, time = 1;

    while(!bag.empty()){
    	unsigned __int128 fac = 1;
    	if(time >1)
    		fac = 1LL << min(60LL,time -1);

    	int lim = (fac > c)? 0:c/fac;

    	auto it = bag.upper_bound(lim);

    	if(it != bag.begin()){
    		it--;
    		bag.erase(it);
    	}
    	else{
    		cost++;
    		auto x = bag.end();
    		x--;
    		bag.erase(x);
    	}
    	time++;
    }

    cout<<cost<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
