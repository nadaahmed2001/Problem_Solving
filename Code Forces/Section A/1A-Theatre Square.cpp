#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long int
using namespace __gnu_pbds;
using namespace std;


void solve() {
    ll n,m,a;
    cin >> n >> m >> a;
    ll num_of_stones = 0;
    ll num_of_stones_n = 0;
    ll num_of_stones_m = 0;

    if(m%a !=0 ) num_of_stones_m += (m/a)+1;
    else num_of_stones_m += (m/a);
    if(n%a !=0 ) num_of_stones_n += (n/a)+1;
    else num_of_stones_n += (n/a);
    
    num_of_stones = num_of_stones_n*num_of_stones_m;
    cout << num_of_stones << endl;

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}