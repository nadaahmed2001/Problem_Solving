#include <iostream>
#include <queue>
#define endl "\n"
#define ll long long
using namespace std;

void clear(queue<char>& q) {
    queue<char> empty;
    swap(q, empty);
}
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    queue<char>q;

    while (n--) {
        bool flag = true;
        string seq;
        cin >> seq;
        for (int i = 0; i < seq.size(); i++) {
            if((seq[i]==')' && i==0) || (seq[i]=='(' && i==seq.size()-1)){
                flag=false;
                break;
            }
            if (seq[i] == '(' || seq[i] == '?') q.push(seq[i]);
            else {
                if (!q.empty()) {
                    q.pop();
                }
                else {
                   // cout << "NO" << endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag == false) {
            cout << "NO" << endl;
            clear(q);
            continue;
        }
        else if (q.size() % 2 == 0 || q.empty()) {
            cout << "YES" << endl;
            clear(q);
            continue;
        }
        else cout << "NO" << endl;
        clear(q);

    }


    return 0;
}
