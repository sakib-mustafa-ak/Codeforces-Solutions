#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;
    for (int i = 0; i < x.size(); i++)
    {
        (x[i] == y[i]) ? cout << "0" : cout << "1";
    }
    cout << endl;
}