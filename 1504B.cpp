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
    int n;
    string a,b;
    cin>>n>>a>>b;

    int c1=0,c2=0,flip=0;
    for(auto c : a){
    	if(c == '1')
    		c1++;
    	else
    		c2++;
    }

    for (int i = n-1; i >= 0; --i)
    {
    	if(flip & 1){
    		if(a[i] == '1')
    			a[i] = '0';
    		else
    			a[i] = '1';
    	}

    	if(a[i] != b[i]){
    		if(c1 != c2){
    			cout<<"NO\n";
    			return;
    		}
    		flip++;
    		swap(c1,c2);
    		a[i]=b[i];
    	}
    	if(a[i] == '1')
    		c1--;
    	else
    		c2--;
    }
    cout<<"YES\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}