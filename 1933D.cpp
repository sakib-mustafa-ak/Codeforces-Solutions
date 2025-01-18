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
      cin >> n;
      vector<int> a(n);
      for (int i = 0; i < n; i++)
        cin >> a[i];
      int min = *min_element(a.begin(), a.end());
      if (count(a.begin(), a.end(), min) == 1) {
        cout << "YES" << endl;
        return;
      }
      for (auto v : a) {
        if (v % min != 0) {
          cout << "YES" << endl;
          return;
        }
      }
      cout << "NO" << endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}