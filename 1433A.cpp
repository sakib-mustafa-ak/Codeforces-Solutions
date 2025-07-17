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
    int cnt=0;
    for (int i = 1; i < 10; ++i)
    {
    	int cur = 0;
    	for (int j = 1; j < 5; ++j)
    	{
    		cur *= 10;
    		cur += i;
    		cnt += j;
    		if(cur == n)
    			goto done;
    	}
    }
    done:
    ;
    cout<<cnt<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}