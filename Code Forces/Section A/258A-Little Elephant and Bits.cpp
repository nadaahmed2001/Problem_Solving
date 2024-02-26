#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <stack>
#include <string>
#include <map>
#include <iomanip>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;

void solve() {
    string n;cin >> n;
    bool foundZero = false;
    string ans = "";
    for (char c : n) {
        if (c == '1') ans.push_back(c);
        else {
            if (!foundZero)foundZero=true;
            else ans.push_back(c);
        }
    }
    if(!foundZero)ans.pop_back();
    cout << ans;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}