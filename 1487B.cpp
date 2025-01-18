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
    int n,k;
    cin>>n>>k;
    if(n%2==0){
    	cout<<((k%n==0)? n:k%n)<<endl;
    	return;
    }
    if(k==1){
    	cout<<1<<endl;
    	return;
    }

    int x = n/2;
    int y = (k%x>0)? k/x:k/x-1;
    k+=y;
    cout<<((k%n==0)? n:k%n)<<endl;
}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}