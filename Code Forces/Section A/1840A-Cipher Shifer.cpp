#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#define endl "\n"
#define ll long long
using namespace std;


void solve() {
    int n;
    string s;
    cin >> n >> s;
    int i = 0, j = 1;
    int length = 0;
    while (i < s.size()) {
        if (s[i] != s[j]) {
            length++;
            j++;
        }
        else {
            s.erase(i+1, length+1);
            i++;
            length = 0;
            j = i + 1;
        }
    }
    cout << s << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) { solve(); }

    return 0;
}