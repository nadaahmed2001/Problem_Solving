#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <iomanip>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;


void solve() {
    int n, target;
    cin >> n >> target;
    vector<pair<int, int>> v;
    for (int i = 0;i < n;i++) {
        int x;
        cin >> x;
        v.push_back({ x,i });
    }
    sort(v.begin(), v.end());
    int i = 0, j = n - 1;
    while (j > i) {
        int sum = v[i].first + v[j].first;
        if (sum > target) j--;
        else if (sum < target) i++;
        else {
            cout << (v[j].second) + 1 << " " << (v[i].second) + 1;
            return;
        }
    }
    cout << -1;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}