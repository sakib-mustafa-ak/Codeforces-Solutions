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
    int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
    std::vector<int> a(n);
    int sum = 0, mx = 0;
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	sum+=a[i];
    	if(a[i]>mx)
    		mx = a[i];
    }

    int x = x1-x2;
    int y = y1-y2;
    int sq = x*x + y*y;

    int mxx = sum,mn;

    if(n==0)
    	mn = 0;
    else
    	mn = max(0LL, 2*mx-sum);

    int mnsq = mn*mn;
    int mxsq = mxx*mxx;

    cout<<((sq>=mnsq and sq<=mxsq)? "YES\n":"NO\n");

}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
