#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<vector<char>> arr(n, vector<char>(n));
    set <char> others;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    set<char> diagonal1;
    set<char> diagonal2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                diagonal1.insert(arr[i][j]);
            }
            if (j == n - i - 1) {
                diagonal2.insert(arr[i][j]);
            }
            if (i != j && j != n - i - 1) {
                others.insert(arr[i][j]);
                if (arr[i][j] == arr[0][0] || others.size() > 1) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    if (diagonal1 == diagonal2 && diagonal1.size() == 1) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}