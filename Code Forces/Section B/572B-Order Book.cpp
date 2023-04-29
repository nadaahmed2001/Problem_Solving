#include <iostream>
#include <map>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n, d;
    cin >> n >> d;
    map<ll, ll>buy;//ascending
    map< ll, ll, greater< ll > > sell,tempMap;//descending
    while (n--) {
        char c;
        ll price, volume;
        cin >> c >> price >> volume;
        if (c == 'S') {
            sell[price] += volume;
        }
        else {
            buy[price] += volume;
        }

    }
    int cntr=d;
    for (map<ll, ll>::reverse_iterator it = sell.rbegin(); it != sell.rend() && cntr; it++){
        tempMap[it->first] = it->second;
        cntr--;
    }
    for (map<ll, ll>::iterator it = tempMap.begin(); it != tempMap.end(); it++){
        cout << "S " << it->first << " " << it->second << endl;
    }
    
    cntr = d;
    for (map<ll, ll>::reverse_iterator it = buy.rbegin(); it != buy.rend() && cntr; it++){
        cout << "B " << it->first << " " << it->second << endl;
        cntr--;
    }

    return 0;
}
