#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    int n;
    cin >> n;
    map<string, int> teams;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        teams[s]++;
    }
    int mx = 0;
    for (auto i : teams) {
        mx = max(mx, i.second);
    }
    for (auto i : teams) {
        if (i.second == mx) {
            cout << i.first << endl;
            return;
        }
    }


}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
