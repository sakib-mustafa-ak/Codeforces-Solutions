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
    string s; cin >> s;
	int two = 0, three = 0;
	int sum = 0;
	for(int i = 0; i < s.size(); i++){
		int x = s[i] - '0';
	    sum += x;
	    if(x == 2){
	      two++;
	    }
	    else if(x == 3){
	      three++;
	    }
	}
	bool ch = false;
	for(int i = 0; i <= two; i++){
	    for(int j = 0; j <= three; j++){
	      if((sum + (i * 2 + j * 6)) % 9 == 0) ch = true;
	    }
	}
	cout << ((ch) ? "YES\n" : "NO\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}