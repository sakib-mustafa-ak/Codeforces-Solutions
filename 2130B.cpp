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
    int n,s; cin>>n>>s;

    int zero,one,two;
    zero = one = two = 0;
    std::vector<int> a(n);
    for(auto &i:a){
    	cin>>i;
    	if(!i) zero++;
    	else if( i == 1) one++;
    	else two ++;
    }

    if(s < one+two*2 or s == one + two*2 + 1){
    	for (int i = 0; i < zero; ++i)
    	{
    		cout<<0<<" ";
    	}
    	for (int i = 0; i < two; ++i)
    	{
    		cout<<2<<" ";
    	}
    	for (int i = 0; i < one; ++i)
    	{
    		cout<<1<<" ";
    	}
    	cout<<endl;
    }else cout<<-1<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
