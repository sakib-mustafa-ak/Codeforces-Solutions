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
   int n; cin>>n;
   string s1,s2; cin>>s1>>s2;
   for(char &c: s1)
   if(c =='G') c = 'B';
   for(char &c:s2)
   if(c=='G') c ='B';
   cout<<(s1==s2?"YES\n":"NO\n"); 
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}