#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    ll n, k;
    cin >> n >> k;
    ll half = (n + 1) / 2;
    if (k <= half)
        cout << (k * 2) - 1 << endl;
    else 
        cout << (k - half) * 2 << endl;
    
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
