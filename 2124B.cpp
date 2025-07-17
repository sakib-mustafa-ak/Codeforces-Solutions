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
    int n;cin>>n; 
    vector<int> a(n+2),p(n+2),suf(n+3),c0(n+2);
 	for(int i=1;i<=n;i++)
 		cin>>a[i];
 	p[1]=a[1]; 
 	for(int i=2;i<=n;i++) 
 		p[i]=min(p[i-1],a[i]);
 	int S0=0; 
 	for(int i=1;i<=n;i++) 
 		S0+=p[i];
 	suf[n+1]=0; 
 	for(int i=n;i>=1;i--) 
 		suf[i]=p[i]+suf[i+1];
 	int f=INT_MAX; 
 	for(int i=2;i<=n-1;i++) 
 		if(p[i]==p[i-1]){
 			f=i; 
 			break;
 		}
 
 	for(int i=2;i<=n;i++) 
 		c0[i]=p[i-1]-p[i];
 	int best=0, M=LLONG_MAX;
 	for(int j=2;j<=n;j++){
 		int sv;
 		if(j<=f){ 
 			if(j==2) 
 				sv=suf[j]-a[j]; 
 			else{ 
 				M=min(M,c0[j-1]); 
 				sv=suf[j]-min(a[j],M); 
 			} 
 		}
 		else sv=suf[j];
 		best=max(best, sv);
 	}
 	cout<<S0-best<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
