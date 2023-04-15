#include <iostream>
#include <deque>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    deque<char> dq1;//for "("
    deque<char> dq2;//for "["
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                dq1.push_back(s[i]);
            }
            else if (s[i] == ')') {
                if (!dq1.empty()) {
                    cnt++;
                    dq1.pop_back();
                }
            }
            else if (s[i] == '[') {
                dq2.push_back(s[i]);
            }
            else {
                if (!dq2.empty()) {
                    cnt++;
                    dq2.pop_back();
                }
            }
        }
        cout << cnt << '\n';
        dq1.clear();
        dq2.clear();
    }

    return 0;
}
