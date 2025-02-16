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
    int n;
    cin>>n;
    std::vector<int> a(n);
    for (int i = 0; i < n; ++i)
    	cin>>a[i];

    
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}

void solve(int cs){
    int n; cin >> n;
    std::vector<int>v,l,r;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    while(v.size()){
        int x = v.back();
        v.pop_back();
        if(v.back() == x){
            r.push_back(x);
            l.push_back(x);
            v.pop_back();
        }else{
            deque<int>need;
            need.push_back(x);
            while(need.size()){
                while(find(need.begin(),need.end(),v.back()) == need.end()){
                    need.push_back(v.back());
                    v.pop_back();
                    if(need.size() + r.size() > n/2){
                        cout << "NO" << endl;
                        return;
                    }
                }
                sort(need.rbegin(),need.rend());
                int x = v.back();
                v.pop_back();
                bool ok = 1;
                while(x != need.front()){
                    if(find(need.begin(),need.end(),x) != need.end())x++;
                    else{
                        need.push_back(x);
                        ok = 0;
                        break;
                    }
                }
                if(ok){
                    l.push_back(x);
                    r.push_back(x);
                    need.pop_front();
                }
            }
        }
    }
    sort(l.begin(),l.end());
    sort(r.begin(),r.end());
    cout << (l == r ? "YES" : "NO")<< endl;
}