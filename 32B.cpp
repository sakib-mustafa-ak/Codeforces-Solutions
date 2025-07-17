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
    string s; cin>>s;
    for (int i = 0; i < s.size(); ++i)
    {
    	if(s[i]=='.')
    		cout<<"0";
    	else{
    		i++;
    		if(s[i]=='.')
    			cout<<"1";
    		else
    			cout<<"2";
    	}
    }
}

signed main(){
    Start
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}