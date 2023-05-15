#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n, ans = -1;
    cin >> n;
    vector<int> vSkill1;
    vector<int> vSkill2;
    vector<int> vboth;
    for (int i = 0; i < n; i++) {
        int x;
        string s;
        cin >> x >> s;
        if (s == "00") continue;
        if (s == "10") vSkill1.push_back(x);
        if (s == "01") vSkill2.push_back(x);
        if (s == "11") vboth.push_back(x);
    }
    sort(vSkill1.begin(), vSkill1.end());
    sort(vSkill2.begin(), vSkill2.end());
    sort(vboth.begin(), vboth.end());

    if ((vSkill1.size() == 0 || vSkill2.size() == 0) && vboth.size() == 0) {
        cout << ans << endl;
        return;
    }
    int temp = 1e9;
    if (vboth.size() != 0) {
        temp = vboth[0];
        ans = vboth[0];
    }
    if (vSkill1.size() != 0 && vSkill2.size() != 0) {
        ans = min(vSkill1[0] + vSkill2[0], temp);

    }
    cout << ans << endl;


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
