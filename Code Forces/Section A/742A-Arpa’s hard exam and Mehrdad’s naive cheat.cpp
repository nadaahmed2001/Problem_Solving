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
    ll n;
    cin>>n;
    if(n==0) cout<<1;
    else if(n%4==1) cout<<8; // 1, 5, 9...
    else if(n%4==2) cout<<4; //2, 6, 10...
    else if(n%4==3) cout<<2; // 3, 7, 11...
    else cout<<6; //4, 8, 12...

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}