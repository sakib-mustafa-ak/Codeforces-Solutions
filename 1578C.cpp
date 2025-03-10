#include <bits/stdc++.h>
using namespace std;

const int N = 200005;
vector<int> adj[N];
pair<int, int> coords[N];
bool visited[N];
int pos;

void dfs(int u, int row) {
    visited[u] = true;
    coords[u] = {row, pos};

    for (int v : adj[u]) {
        if (!visited[v]) {
            if (row == 0) {
                coords[v] = {1, pos};
                dfs(v, 1);
            } else {
                pos++;
                coords[v] = {0, pos};
                dfs(v, 0);
            }
        }
    }
}

void solve() {
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++) {
        adj[i].clear();
        visited[i] = false;
    }

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    pos = 0;
    dfs(1, 0);

    bool valid = true;
    for (int i = 1; i <= n; i++) {
        if (abs(coords[i].second) > 200000) {
            valid = false;
            break;
        }
    }

    if (!valid) {
        cout << "No\n";
    } else {
        cout << "Yes\n";
        for (int i = 1; i <= n; i++) {
            cout << coords[i].first << ' ' << coords[i].second << '\n';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}