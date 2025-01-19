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
    int n,one = 0,two = 0, odd = 0;
    cin>>n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	cin>>a[i];
    	if(a[i]==1)
    		one++;
    	if(a[i]==0)
    		two++;
    }
    sort(all(a));

    for (int i = 0; i < n-1; ++i)
    {
    	if(a[i+1]-a[i]==1){
    		odd++;
    		break;
    	}
    }

    ((one&&two)||(one&&odd))? cout<<"NO\n":cout<<"YES\n";

}

signed main(){
    Start
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}