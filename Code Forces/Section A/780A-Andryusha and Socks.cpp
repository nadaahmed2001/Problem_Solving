#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <string>
#include <map>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    ll ans = 0;
    for (ll i = 0;i < 2*n;i++) {
        ll x;
        cin >> x;
        m[x]++;
        ans = max(ans, (ll)m.size());
        if (m[x] > 1) {
            m.erase(x);
        }

    }
    cout << ans << endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}