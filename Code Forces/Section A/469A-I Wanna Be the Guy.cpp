#include <iostream>
#include <algorithm>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
using namespace __gnu_pbds;
using namespace std;


void solve() {
    ordered_set v;
    int n;
    cin >> n;
    //little X
    int x;
    cin >> x;
    for (int i = 0; i < x; i++) {
        int a;
        cin >> a;
        v.insert(a);
    }
    //little Y
    int y;
    cin >> y;
    for (int i = x; i < x + y; i++) {
        int a;
        cin >> a;
        v.insert(a);
    }
    if (v.size() == n)
        cout << "I become the guy." << endl;

    else
        cout << "Oh, my keyboard!" << endl;

}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
