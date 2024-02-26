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
    ll n; cin >> n;
    cout<<__builtin_popcount(n)<<endl; //the number of 1 bits in n indicates the number of steps needed to reach n by doubling
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}