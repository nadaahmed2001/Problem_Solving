#include <iostream>
#include <algorithm>
#include <vector>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
using namespace __gnu_pbds;
using namespace std;


void solve() {
    ll children,icecream , ans=0;
    char sign;
    ll num;
    cin>>children>>icecream;
    for(ll i=0;i<children;i++){
        cin>>sign>>num;
        if(sign=='+') icecream+=num;
        else{
            if(icecream>=num) icecream-=num;
            else ans++;
        }
    }
    cout<<icecream<<" "<<ans<<endl;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();

    return 0;
}
