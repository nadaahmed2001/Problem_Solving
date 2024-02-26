#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <iomanip>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;



ll ingNeeded[3]={};
ll stock[3]={};
ll cost[3]={};
ll money;


bool ok(ll numBurgers){
    ll totalMoenyNeeded=0;
    for(ll i=0;i<3;i++){//for each ingredient
        ll moneyForIng=((numBurgers*ingNeeded[i])-stock[i] )*cost[i]; //The money needed for one Bread (for example)
        if(moneyForIng<0) continue;
        totalMoenyNeeded+=moneyForIng;
    }
    if(totalMoenyNeeded<=money) return true;
    else return false;
}
void solve() {

    string recipt;
    cin >> recipt;
    for(char c : recipt) {
        if(c=='B') ingNeeded[0]++;
        else if(c=='S') ingNeeded[1]++;
        else ingNeeded[2]++;
    }
    cin >> stock[0] >> stock[1] >> stock[2];
    cin >> cost[0] >> cost[1] >> cost[2];
    cin >> money;

    ll right=1e15, left=0;
    ll ans=0;
    while(left<=right){
        ll mid=(left+right)/2;
        if (ok(mid)){
            ans=mid;
            left=mid+1;
        }else{
            right=mid-1;
        }
    }
    cout << ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}