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
const int N = 2e5 +10;
vector<int> ans(N);

void pre(){
    for(int i = 1 ; i<N ;i++){
        ans[i] = ans[i-1];
        int x = i;
        while(x>0){
            ans[i]+=x%10;
            x/=10;
        }
    }
}

void solve(){
    int n; cin>>n;
    cout<<ans[n]<<endl;
}

signed main(){
    Start
    pre();
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}