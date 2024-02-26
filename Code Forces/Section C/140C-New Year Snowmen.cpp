#include <iostream>
#include <algorithm>
#include <queue>
#include <set>
#include <vector>
#include <stack>
#include <string>
#include <map>
#include <iomanip>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;

void solve() {
    ll n;
    cin >> n;
    map<ll, ll> balls;
    vector<vector<ll>> snowMen;
    for (int i = 0; i < n; i++) {
        ll diameter;
        cin >> diameter;
        balls[diameter]++;
    }
    set<pair<ll, ll>> s;
    for (auto i : balls) {
        s.insert({i.second, i.first}); //quantity, diameter
    }
    while(s.size()>=3){
        auto it = prev(s.end()); pair<ll,ll> a = *it; s.erase(it);
        it = prev(s.end()); pair<ll,ll> b = *it; s.erase(it);
        it = prev(s.end()); pair<ll,ll> c = *it; s.erase(it);


        --a.first; --b.first; --c.first;
        if(a.first>0) s.insert(a);//if quantity is not zero
        if(b.first>0) s.insert(b);
        if(c.first>0) s.insert(c);

        vector<ll> temp;
        temp.push_back(a.second); temp.push_back(b.second); temp.push_back(c.second);
        sort(temp.begin(),temp.end(),greater<ll>());
        snowMen.push_back(temp);
    }
    cout<<snowMen.size()<<endl;
    for(auto i:snowMen){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }


}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}