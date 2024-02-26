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
    set<int>s;
    for (int i = 0;i < n;i++) {
        int x;cin >> x;
        s.insert(x);
    }
    cout << s.size() << endl;


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}