#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <iomanip>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    ll n;cin >> n ;
    vector<ll> v(n);
    ll i = 0, j = 0;
    ll subSum = 0, ans = LLONG_MIN;
    for (ll i = 0;i < n;i++) {
        cin >> v[i];
        subSum += v[i];
        ans = max(ans, subSum);
        subSum = max(subSum, 0LL);//if sum of all the previous elements is -ve, we don't need it
    }
    cout << ans << endl;


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}