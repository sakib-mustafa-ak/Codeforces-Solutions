#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
int N = 50,n,ans;
std::vector<int> a(N);

void bs(){
	int l = 0, r = 1e12;
	ans = -1;
	while(l<=r){
		int mid = (l + r)/2;
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			sum+=(mid/a[i]+1);
			//cout<<mid<<endl;
			if(sum > mid)
				break;
		}
		if(sum<=mid){
			ans = mid;
			//cout<<ans<<endl;
			r = mid - 1;
		}
		else
			l = mid + 1;
	}
	
}

void solve(){
    cin>>n;
    for (int i = 0; i < n; ++i)
    	cin>>a[i];

    bs();
    
    if(ans == -1){
    	cout<<ans<<endl;
    	return;
    }

    for (int i = 0; i < n; ++i)
    	cout<<ans/a[i]+1<<" ";
    cout<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}


