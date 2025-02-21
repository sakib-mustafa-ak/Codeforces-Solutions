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
    int n,count=0; cin>>n;
    string s;
    cin>>s;
    s = '0' + s;
    for (int i = 1; i <= n; ++i)
    {
        if((s[i]=='1' and s[i-1] == '0')||(s[i]=='0' and s[i-1]=='1'))
            count++;
    }

    cout<<count << endl;
}   

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}