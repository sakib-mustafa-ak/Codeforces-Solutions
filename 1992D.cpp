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
    int n,m,k,pos=0,sw=0;
    cin>>n>>m>>k;
    string s;
    cin>>s;
    s = "L" + s + "L";
    n += 2;
    int flag = 1;
    for(int pos = 0 ; pos < n-1 ; pos++){
        int nxt = pos+1;
        while(nxt - pos < m and s[nxt] != 'L'){
            nxt++;
        }
        if(s[nxt] == 'L')
            pos = nxt-1;
        else{
            while(s[nxt] != 'L'){
                sw++;
                if(s[nxt] == 'C')
                    flag = 0;
                nxt++;
            }
            pos = nxt - 1;
        }
    }
    cout<<((flag and sw <= k)? "Yes\n":"No\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}