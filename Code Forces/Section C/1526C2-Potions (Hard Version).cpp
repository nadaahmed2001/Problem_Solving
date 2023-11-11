#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <string>
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
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    ll ans = 0, health = 0;
    for (ll i = 0;i < n;i++) {
        ll num;
        cin >> num;
        if (num > 0) {
            ans++;
            health += num;
        }
        else {
            if (health + num >= 0) {
                ans++;
                health += num;
                pq.push(num);
            }
            else {
                if (!pq.empty() && pq.top() < num) {
                    health -= pq.top();
                    health += num;
                    pq.pop();
                    pq.push(num);
                }
            }

        }

    }
    cout << ans;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}