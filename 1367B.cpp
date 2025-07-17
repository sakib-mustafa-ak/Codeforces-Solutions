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
    int a=0,b=0;
    int ops = 0;
    for (int i = 0; i < n; ++i)
    {
    	int x ; cin>>x;
    	if(i%2 == 0) a++;
    	if(x%2 == 0) a--;
    	if(i%2 == 1) b++;
    	if(x%2 == 1) b--;
    	if(i%2 != x%2) ops++;
    }
    cout<<(a or b? -1:ops/2)<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}