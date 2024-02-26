#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <string>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;

void solve(){
    ll n,x;cin>>n;
    multiset<ll> towers;
    for(ll i=0;i<n;i++){
        cin>>x;
        auto it=towers.upper_bound(x);
        if(it==towers.end()){
            towers.insert(x);
        }
        else{
            towers.erase(it);
            towers.insert(x);
        }
    }
    cout<<towers.size()<<endl;

}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}