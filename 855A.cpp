#include<bits/stdc++.h>
using namespace std;

int main(){
	int n; cin>>n;
	map<string,int> mp;
	for (int i = 0; i < n; ++i)
	{
		string s;
		cin>>s;
		mp[s]++;
		if(mp[s]>1)
			cout<<"YES\n";
		else
			cout<<"NO\n";
	}
}
