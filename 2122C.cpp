#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

struct haha{
	int x,y,idx;
};

void solve(){
	int n; cin>>n;
	std::vector<haha> a(n);
	for (int i = 0; i < n; ++i)
	{
	    cin>>a[i].x>>a[i].y;
	    a[i].idx = i+1;
	}

	sort(all(a),[](auto a,auto b){
		return a.x < b.x;
	});
	sort(a.begin(),a.begin()+n/2,[](auto a,auto b){
		return a.y < b.y;
	});
	sort(a.begin()+n/2,a.end(),[](auto a,auto b){
		return a.y < b.y;
	});

	for (int i = 0; i < n/2; ++i)
	{
		cout<<a[i].idx<<" "<<a[n-1-i].idx<<endl;
	}
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
