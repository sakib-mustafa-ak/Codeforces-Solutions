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
    int l,r,real;
};

bool com(const haha &a , const haha &b){
    if(a.l != b.l){
        return a.l < b.l;
    }
    return a.r < b.r;
}

void solve(){
    int n,k; cin>>n>>k;

    std::vector<haha> a(n);
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i].l>>a[i].r>>a[i].real;
    }

    sort(all(a),com);

    priority_queue<pair<int,int>> ca;

    int ptr = 0;
    int coin = k;
    int mx = coin;

    while(1){
        while(ptr< n and a[ptr].l <= coin){
            ca.push({a[ptr].real, a[ptr].r});
            ptr++;
        }

        while(!ca.empty() and ca.top().ss<coin){
            ca.pop();
        }

        if(ca.empty()) break;

        pair<int,int> best = ca.top();
        ca.pop();

        coin = best.ff;
        mx = max(mx,coin);
    }

    cout<<mx<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
