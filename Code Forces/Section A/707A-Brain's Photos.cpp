#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    int n, m;
    cin >> n>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            char color;
            cin >> color;
            if (color != 'W' && color != 'B' && color != 'G') {
                cout << "#Color" << endl;
                return;
            }
        }
    }
    cout << "#Black&White" << endl;

}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}