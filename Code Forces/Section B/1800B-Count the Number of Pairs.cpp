#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    map<char, int> m;
    vector<char> v;//holds unpaired chars
    while (n--) {
        char c;
        cin >> c;
        m[c]++;
    }
    int ans = 0;
    for (char i = 'A'; i <= 'Z'; i++) {
        if (m.find(i) != m.end() || m.find(i + 32) != m.end()) {
            int pairs = min(m[i], m[i + 32]);
            ans += pairs;
            m[i] -= pairs;
            m[i + 32] -= pairs;
            //now we have only the characters that are not paired

            if (m[i] > 1) v.push_back(i);
            if (m[i + 32] > 1) v.push_back(i + 32);
        }
    }
    for (int i = 0; i < v.size(); i++) {
        while (m[v[i]] > 1 && k != 0) {
            m[v[i]] -= 2;
            ans++;
            k--;
        }
    }

    cout <<ans << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
