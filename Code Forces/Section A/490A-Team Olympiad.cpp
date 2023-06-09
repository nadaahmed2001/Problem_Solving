#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    int n, teams = 0;
    cin >> n;
    vector<int> a(n);
    vector<int> ones;
    vector<int> twos;
    vector<int> threes;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            ones.push_back(i);
        }
        else if (a[i] == 2) {
            twos.push_back(i);
        }
        else {
            threes.push_back(i);
        }
    }
    teams = min(ones.size(), min(twos.size(), threes.size()));
    cout << teams << endl;
    for (int i = 0; i < teams; i++) {
        cout << ones[i] + 1 << " " << twos[i] + 1 << " " << threes[i] + 1 << endl;
    }


}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
