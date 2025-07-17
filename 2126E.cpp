#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

int gcd(int a,int b){
	while(b){
		a%=b;
		swap(a,b);
	}
	return a;
}

void solve(){
    int n; cin>> n;
    vector<int> p(n),s(n);
    for(auto &i:p)
    	cin>>i;
    for(auto &i:s)
    	cin>>i;

    int flag = 1;
    for (int i = 1; i < n; ++i)
    {
    	if(p[i-1]%p[i]!=0){
    		flag = 0;
    		break;
    	}
    	if(s[i]%s[i-1] !=0){
    		flag = 0;
    		break;
    	}
    }

    if(!flag){
    	cout<<"NO\n";
    	return;
    }

    vector<int> a(n);
    for (int i = 0; i < n; ++i)
    {
    	int x = gcd(p[i],s[i]);
    	a[i] = (p[i]/x)*s[i];
    }

    int pos = a[0];
    if(pos != p[0]) flag = 0;
    for (int i = 1; i < n and flag; ++i)
    {
    	pos = gcd(pos,a[i]);
    	if(pos !=p[i]){
    		flag = 0;
    		break;
    	}
    }

    pos = a[n-1];
    if(pos != s[n-1]) flag = 0;
    for (int i = n-2; i >= 0 and flag ; --i)
    {
    	pos = gcd(a[i],pos);
    	if(pos != s[i]){
    		flag = 0;
    		break;
    	}
    }

    cout<<(flag? "YES\n":"NO\n");
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
