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
    int n; cin >> n;
    string s; cin >> s;
    
    map<char, int> mp;
    
    for(int i = 0; i < n; i++)
        mp[s[i]]++;
    
    vector<string> v;
    
    for(auto a: mp){
        int x = a.second;
        char c = a.first;
        
        string tmp; 
        for(int i = 0; i < x; i++)
            tmp.push_back(c);
        
        v.push_back(tmp);
    }
    string ans;
    while(1){
        bool check = true;
        for(int i = 0; i < v.size(); i++){
            if(v[i].size() == 0) continue;
            
            check = false;
            ans.push_back(v[i].back());
            v[i].pop_back();
        }
        
        if(check) break;
    }
    
    cout << ans << endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}