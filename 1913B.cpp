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
    string s ; cin>>s;
    int one = 0 , two = 0 ;
    for (int i = 0; i < s.size(); ++i)
    {
    	if(s[i]=='0')
    		one++;
    	else
    		two++;
    }
    if(one == two){
    	cout<<0<<endl;
    	return;
    }
    for (int i = 0; i < s.size(); ++i)
    {
    	if(s[i]=='0'){
    		if(two) two--;
    		else{
    			cout<<s.size()-i<<endl;
    			return;
    		}
    	}
    	else{
    		if(one) one--;
    		else{
    			cout<<s.size()-i<<endl;
    			return;
    		}
    	}
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
	