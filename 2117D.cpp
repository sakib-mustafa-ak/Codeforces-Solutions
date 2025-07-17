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
    int n; cin>>n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    }
    int mni = min_element(all(a)) - a.begin();
    int mn = a[mni],xx,xx1,xx2;

    if(mn<=mni or mn<=(n-mni+1))
    	cout<<"NO\n";
    else
    	cout<<"YES\n";
    // if((mn%(n-mni+1))%mni==0){
    // 	xx = 1;
    // 	xx1 = mn/(n-mni+1);
    // 	xx2 = (mn%(n-mni+1))/mni;
    // }
    // else if((mn%mni)%(n-mni+1)==0){
    // 	xx = 2;
    // 	xx1 = mn/mni;
    // 	xx2 = (mn%mni)/(n-mni+1);
    // }
    // else{
    // 	cout<<"NO\n";
    // 	return;
    // }
    	
    // for (int i = 0; i < n; ++i)
    // {
    // 	if(xx==1){
    // 		a[i] -= ((n-mni+1)*xx1);
    // 		a[i] -= (mni*xx2);
    // 	}
    // 	else if(xx==2){
    // 		a[i] -= (mni*xx1);
    // 		a[i] -= (n-mni+1)*xx2;
    // 	}
    // }
    // if(*max_element(all(a))==0)
    // 	cout<<"YES\n";
    // else
    // 	cout<<"NO\n";
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
