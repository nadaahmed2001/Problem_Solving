#include <iostream>
#include <set>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, m, k, ans = 0;
    cin >> n >> m >> k;
    multiset<ll> desired_size, actual_size;
    ll temp;
    for (ll i = 0; i < n; i++) {
        cin >> temp;
        desired_size.insert(temp);
    }
    for (ll i = 0; i < m; i++) {
        cin >> temp;
        actual_size.insert(temp);
    }
    //for every desired size, find the closest actual size which is between desired_size - k and desired_size + k
    for (auto it = desired_size.begin(); it != desired_size.end(); it++) {
        auto it2 = actual_size.lower_bound(*it - k);
        if (it2 != actual_size.end() && *it2 <= *it + k) {
            ans++;
            actual_size.erase(it2);
        }
    }
    cout << ans << "\n";

    return 0;
}