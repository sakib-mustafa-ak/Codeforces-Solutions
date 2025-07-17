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
    std::vector<pair<int,int>> a(n);
    std::vector<int> h(n+1);
    int mx = 0;

    for (int i = 0; i < n; ++i)
    {
    	int x; cin>>x;
    	a[i] = {x,i+1};
    	h[i+1] = x;
    	if(x>mx)
    		mx = x;
    }

    sort(all(a));

    std::vector<vector<int>> adj(n+1);

    for (int i = 0; i < n; ++i)
    {
    	if(i)
    		adj[a[i].ss].push_back(a[i-1].ss);
    	if(i<n-1)
    		adj[a[i].ss].push_back(a[i+1].ss);
    }

    vector<int> mn(n+1,LLONG_MAX);
    priority_queue<pair<int,int>> pq;

    mn[k] = 0;
    pq.push({0,k});

    while(!pq.empty()){
    	int time = pq.top().ff;
    	int u = pq.top().ss;
    	pq.pop();

    	if(time<mn[u]) continue;

    	for(auto v: adj[u]){
    		int travel = abs(h[u]-h[v]);
    		int arrival = time + travel;

    		if(h[u] >=arrival and h[v] >=arrival+1 and arrival<mn[v]){
    			mn[v] = arrival;
    			pq.push({arrival,v});
    		}
    	}
    }

    int flag = 0;

    for (int i = 1; i <= n; ++i)
    {
    	if(h[i] == mx){
    		if(mn[i] != LLONG_MAX){
    			flag = 1;
    			break;
    		}
    	}
    }

    cout<<(flag? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
