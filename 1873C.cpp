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
    int ans = 0;
    for (int i = 0; i < 10; ++i) {
        string s; cin >> s;
        for (int j = 0; j < 10; ++j) if (s[j] == 'X') {
            ans += min({i, 9 - i, j, 9 - j}) + 1;
        }
    }
    cout << ans << '\n';
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}