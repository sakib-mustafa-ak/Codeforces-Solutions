#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second

vector<int> a;

string find_path(int n, char m1, char m2){
	deque<int> remaining(all(a));
	string path = "";
	vector<int> taken;

	auto make_move = [&](char move){
		path += move;
		if(move == 'L'){
			taken.push_back(remaining.front());
			remaining.pop_front();
		}
		else{
			taken.push_back(remaining.back());
			remaining.pop_back();
		}
	};
	make_move(m1);
	make_move(m2);

	for (int i = 2; i < n; ++i)
	{
		int prev1 = taken[i - 2];
        int prev2 = taken[i - 1];
 
        int left_val = remaining.front();
        int right_val = remaining.back();
 
        bool is_increasing_trend = (prev1 < prev2);
        bool valid_L = is_increasing_trend ? (left_val < prev2) : (left_val > prev2);
        bool valid_R = is_increasing_trend ? (right_val < prev2) : (right_val > prev2);
 
        char chosen_move = ' ';
 
        if (valid_L && valid_R) {
            bool prefer_L = is_increasing_trend ? (left_val <= right_val) : (left_val >= right_val);
            chosen_move = prefer_L ? 'L' : 'R';
        } else if (valid_L) {
            chosen_move = 'L';
        } else if (valid_R) {
            chosen_move = 'R';
        }
 
        if (chosen_move != ' ') {
            make_move(chosen_move);
        } else {
            return "";
        }
	}
	return path;
}

void solve(){
    int n; cin>>n;
    for (int i = 0; i < n; ++i)
    {
    	int x; cin>>x;
    	a.push_back(x);
    }

    if(n<=2){
    	cout<<string(n,'L')<<endl;
    	return;
    }

    string moves = "LR";
    for (char m1 : moves) {
        for (char m2 : moves) {
            string ans = find_path(n, m1, m2);
            if (!ans.empty()) {
                cout << ans << endl;
                return;
            }
        }
    }
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}
