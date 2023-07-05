#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
using namespace __gnu_pbds;
using namespace std;


void solve() {
    int n,cntr=0;
    cin >> n;
    int top;
    cin >> top;
    for(int i=0;i<n;i++){
        int face1,face2;
        cin >> face1 >> face2;
        //every top and bottom face must be the same in all dominoes (but reversed)
        //so if any of the faces are the same as the top or 7-top, then it is impossible for this number to
        //be the top or bottom face
        if(face1==top || face2 == top || face1 == 7-top || face2 == 7-top){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}