#include <iostream>
#include <algorithm>
#include <queue>
#include <deque>
#include <vector>
#include <set>
#include <string>
#include <map>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> mp;//quality, price
    ll p,q;
    
    while(n--){
        cin>>p>>q;
        mp.insert({p,q});
    }
    ll dumy=-1;
    bool flag = true;
    for(auto it=mp.begin(); it!=mp.end() ; it++){
       // cout<<it->first<<" "<<it->second<<endl;
        if(it->second>dumy){ //Normal case, Poor Alex
            dumy=it->second;
        }else{
            flag = false;
            break;
        }
    }
    if (flag) cout<<"Poor Alex";
    else
    cout<<"Happy Alex";

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}