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

bool checkIfGoodNumber(ll num,ll a){
   set<ll> s;
   set<ll> s2;
    for(ll i=0;i<=a;i++) s.insert(i);
    ll cntr=0;
    while(num){
        ll elem=num%10;
        if(elem<=a) s2.insert(elem);
        num/=10;
    }
    if(s.size()==s2.size()) return true;
    else return false;
}

void solve() {
    ll n,a;
    cin >> n>> a;
    ll *arr = new ll[n];
    ll ans = 0;
    bool check;
    while(n--){
        cin >> arr[n];
        check=checkIfGoodNumber(arr[n],a);
        if(check) ans++;
    }
    cout << ans << endl;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}