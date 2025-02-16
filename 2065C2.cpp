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
    int n,m;
    cin >> n >> m;
    vector<int> a(n),b(m);
    for (auto &i:a) cin >> i;
    for (auto &i:b) cin >> i;
 
    if (is_sorted(a.begin(),a.end())) {
        cout << "YES\n";
        return;
    }
 
    sort(b.begin(),b.end());
    int mn = INT_MIN;

    for (auto i:a) {
        auto it = lower_bound(b.begin(),b.end(),mn + i);
 
        if (it != b.end()) {
            if (i >= mn) {
            mn = min(i,*it - i);
        }     
        else mn = *it - i;
        } 
        else {
            if (i < mn) {
                cout << "NO\n";
                return;
            } 
            else mn = i;
        }
    }
    cout << "YES\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}