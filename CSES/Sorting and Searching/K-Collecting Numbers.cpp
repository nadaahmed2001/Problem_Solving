#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <iomanip>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    ll n;cin >> n;
    vector<ll> v(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++) {
        cin >> v[i];
        m[v[i]] = i;
    }
    int ans = 1;
    for (auto i : m) {
        if (i.second < m[i.first - 1]) ans++;
    }
    cout << ans << endl;


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}