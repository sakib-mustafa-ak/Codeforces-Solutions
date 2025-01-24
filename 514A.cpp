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
    int x;
    cin>>x;
    vector<int> a;
    while(x>0){
        if(x%10>=5)
            a.push_back(9-x%10);
        else
            a.push_back(x%10);
        x/=10;
    }
    for (int i = a.size()-1; i >=0; --i){
        if(i == a.size()-1&&a[i]==0)
            cout<<9;
        else
            cout<<a[i];
    }
    cout<<endl;

}

signed main(){
    Start
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}