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
    int n,m;
	cin >> n >> m;
	char s[n][m];
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++)
			cin >> s[i][j];
	}
	int j = 0;
	while(j < m){
		int cnt = 0;
		for(int i = 0;i<n;i++){
			if(s[i][j] == '*'){
				s[i][j] = '.';
				cnt++;
			}else if(s[i][j] == 'o'){
				for(int x = i - 1;x>=0 and cnt > 0;x--){
					s[x][j] = '*';
					cnt--;
				}
				cnt = 0;
			}
		}
		if(cnt > 0){
			for(int x = n - 1;x>=0 and cnt > 0;x--){
				s[x][j] = '*';
				cnt--;
			}
		}
		j++;
	}
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++)
			cout << s[i][j];
		cout << endl;
	}
}

signed main(){
    //Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}