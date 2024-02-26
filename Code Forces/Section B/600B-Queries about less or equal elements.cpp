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
    int n, m, ans = 0;cin >> n >> m;
    vector<int> a(n);
    vector<int> b(m);
    for (int i = 0;i < n;i++)cin >> a[i];
    for (int i = 0;i < m;i++)cin >> b[i];
    sort(a.begin(), a.end());
    for (int i = 0;i < m;i++) {
        vector<int> ::iterator t = upper_bound(a.begin(), a.end(), b[i]);
        cout << t - a.begin() << " ";
    }
    cout << endl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}