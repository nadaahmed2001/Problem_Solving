#include <iostream>
#include <algorithm>
#include <vector>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
using namespace __gnu_pbds;
using namespace std;

ordered_set generate_devisors(ll n) {
    ordered_set devisors;
    ll i;
    for ( i = 1; i * i < n; i++) {
        if (n % i == 0) { 
            devisors.insert(i);
            devisors.insert(n/i);
        }
    }
    if(i*i==n) devisors.insert(i);
    return devisors;
}
void solve() {
    ll n, k;
    cin >> n >> k;
    ordered_set devisors = generate_devisors(n);
    if(devisors.size()<k) cout << -1;
    else cout << *devisors.find_by_order(k-1);

}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
