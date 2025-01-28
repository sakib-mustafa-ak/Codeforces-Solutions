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
    int n,k=1;
    string s;
    cin>>n>>s;

    map<string,int> mp;
    for (int i = 0; i < n; ++i)
    {
    	if(k>3)
    		break;
    	for (int j = 0; j <= n-k; ++j)
    	{
    		string x = "";
    		for (int l = j; l < j+k; ++l)
    		{
    			x.push_back(s[l]);
    		}
    		mp[x] = 1;
    	}
    	k++;
    }

    string x = "a";
    for (int i = 0; i < 26; ++i)
    {
    	if(mp[x] == 0){
    		cout<<x<<endl;
    		return;
    	}
    	x[0]++;
    }
    x = "aa";
    for (int i = 0; i < 26; ++i)
    {
    	for (int j = 0; j < 26; ++j)
    	{
    		if(mp[x] == 0){
    			cout<<x<<endl;
    			return;
    		}
    		x[1]++;
    	}
    	x[0]++;
    	x[1] = 'a';
    }
    x="aaa";
    for (int i = 0; i < 26; ++i)
    {
    	for (int j = 0; j < 26; ++j)
    	{
    		for (int k = 0; k < 26; ++k)
    		{
    			if(mp[x] == 0){
    				cout<<x<<endl;
    				return;
    			}
    			x[2]++;
    		}
    		x[1]++;
    		x[2]='a';
    	}
    	x[0]++;
    	x[1] = x[2] = 'a';
    }
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}