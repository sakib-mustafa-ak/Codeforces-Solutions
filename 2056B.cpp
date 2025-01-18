#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

void solve(){
	int n;
	cin>>n;
	vector<string> a(n);
	vector<pair<int,int>> ans(n); 
	for (int i = 0; i < n; ++i)
	{
		ans[i].second = i+1;
		string s;
		cin>>s;
		for (int j = 0; j < n; ++j)
		{
			if(s[j]=='1' && j < i)
				ans[i].first++;
			else if( j > i && s[j] == '0')
				ans[i].first++;
		}
	}
	sort(ans.begin(),ans.end());
	for(auto v:ans)
		cout<<v.second<<" ";
	cout<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
       	solve();
    }
}