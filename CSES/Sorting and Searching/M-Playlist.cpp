#include <iostream>
#include <vector>
#include <map>
#define endl "\n"
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, sequence = 0, ans = 0, temp;
    cin >> n;
    vector<int> v(n);
    map<int, bool> song;
    for (int i = 0; i < n; i++) cin >> v[i];
    int j = 0;
    for (int i = 0; i < n; i++) {

        if (song.find(v[i]) == song.end() || song[v[i]] == false) {
            int k = v[i];
            song[v[i]] = true;
            sequence++;
            ans = max(ans, sequence);
        }
        else {
            while (v[j] != v[i]) {
                song[v[j]] = false;
                j++;
            }
            sequence = i - j;
            j++;
        }


    }



    cout << ans << endl;

    return 0;
}
