#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,ans;
		cin>>n;
		vector<int> a(n);
		cin>>a[0];
		ans=a[0];
		for (int i = 1; i < n; ++i)
			cin>>a[i];

		sort(a.begin(),a.end());
		ans = a[n/2];
		cout<<ans<<endl;

	}
}