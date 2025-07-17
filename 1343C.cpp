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
    int n,sum =0; cin>>n;
    vector<int> a(n);
    for(auto &i: a)
        cin>>i;
    int mx = 0,j = 0;
    for (int i = 0; i < n; ++i)
    {
        if(a[i]<0){
            mx = a[i];
            j = i+1;
            while(j<n and a[j]<0){
                mx = max(mx,a[j]);
                j++;
            }
            sum+=mx;
            i = j-1;
        }
        else{
            mx = a[i];
            j = i+1;
            while(j<n and a[j]>0){
                mx = max(mx,a[j]);
                j++;
            }
            sum+=mx;
            i = j-1;
        }
    }
    cout<<sum<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}


