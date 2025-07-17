#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

int gcd(int a,int b){
	while(b){
		a%=b;
		swap(a,b);
	}
	return a;
}

void solve(){
    int n; cin>>n;
    vector<int>a(n);
    for(auto &i:a)
    	cin>>i;

    int x = 1;
    for (int i = 0; i < n-1; ++i)
    {
    	if(a[i]==0){
    		continue;
    	}
    	if(a[i+1]%a[i] !=0){
    		int g = gcd(a[i],a[i+1]);
    		int d = a[i]/g;
    		int gg = gcd(x,d);
    		__int128 tmp =(__int128) x/gg*d;
    		x = (int)tmp;
    	}
    }
    cout<<x<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
