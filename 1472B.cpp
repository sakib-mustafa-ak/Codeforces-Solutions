#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
#define pb push_back
#define pr pair<int,int>

void solve(){
    int n; cin>>n;
    int ones = 0, twos = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x ; cin>>x;
    	if(x == 1) ones++;
    	else twos++;
    }
    int total = ones + 2*twos;
    if(total%2 != 0){
    	cout<<"NO\n";
    	return;
    }
    int half = total/2;
    bool ok = false;
    for (int i = 0; i <= twos; ++i)
    {
    	int need = half - 2*i;
    	if(need >= 0 and need <= ones){
    		ok = true;
    		break;
    	}
    }
    cout<<(ok? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}