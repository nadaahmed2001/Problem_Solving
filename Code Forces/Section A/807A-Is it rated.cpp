#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    int n;
    cin >> n;
    bool flag = false;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        if (x != y) { cout << "rated" << endl; return; }
        v[i] = { x, y };
    }
    vector<pair<int, int>> v2 = v;
    sort(v2.begin(), v2.end(), greater<pair<int, int>>());
    if (v2 == v) { cout << "maybe" << endl; return; }
    else { cout << "unrated" << endl; return; }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
