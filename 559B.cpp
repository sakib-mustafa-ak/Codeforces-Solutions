#include<bits/stdc++.h>
using namespace std;

string normalize(string s) {
    if (s.length() % 2 == 1) {
        return s; // Odd-length strings remain the same
    }
    
    int mid = s.length() / 2;
    string left = normalize(s.substr(0, mid));
    string right = normalize(s.substr(mid));
    
    // Return the lexicographically smallest combination
    return min(left + right, right + left);
}

bool are_equivalent(string s1, string s2) {
    return normalize(s1) == normalize(s2);
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    
    cout << (are_equivalent(s1, s2) ? "YES" : "NO") << endl;
    return 0;
}
