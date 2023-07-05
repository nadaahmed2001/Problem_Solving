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
    string song;
    cin >> song;
    for (int i = 0; i < song.size(); i++) {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
            song.erase(i, 3);
            if (i != 0 && song[i - 1] != ' ') {
                song.insert(i, " ");
            }
            i--;
        }
    }
    cout << song << endl;
    
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
