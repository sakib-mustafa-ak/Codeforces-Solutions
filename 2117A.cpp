#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
int ttt = 0;

void solve(){
	//cout<<"Case: "<<ttt<<endl;
    int n,x; cin>>n>>x;
    //cout<<n<<" "<<x<<endl;
    bool flag = false;
    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	// cout<<a[i];
    }
    for (int i = 0; i < n; ++i)
    {
    	if(a[i]==1 and x > 0){
    		flag = true;
    		i+=x;
    		if(i>=n)
    			break;
    		x = 0;
    	}
    	if(a[i]==1 and x == 0){
    		cout<<"NO\n";
    		return;
    	}
    }
    cout<<"YES\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
    	// ++ttt;
    	// if(ttt==22)
    	// 	break;
        solve();
    }
}


