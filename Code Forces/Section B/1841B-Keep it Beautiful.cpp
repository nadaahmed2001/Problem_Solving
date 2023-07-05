#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
using namespace __gnu_pbds;
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> a;
    int first = -1, last = -1;
    bool flag = false;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (flag == false){ //normal
            if (first == -1) {// first element
                first = x;
                last = x;
                cout << 1;
            }
            else if (last <= x) {
                last = x;
                cout << 1;
            }
            else if (first >= x) { //now not normal
                flag = true;
                cout << 1;
                last = x;
            }
            else cout << 0;
        }
        else {
            if (first >= x && last <= x) {
                last = x;
                cout << 1;
            }
            else cout << 0;
        }
    }
    cout << endl;
}

int main(){
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        int t;
        cin >> t;
        while (t--) { solve(); }

        return 0;
}