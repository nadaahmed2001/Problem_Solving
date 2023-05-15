#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int sum=0, ans = 0;
    for(int i = 0; i < n; i++){
         cin >> a[i];
        if(a[i]==0){
            sum++;
            ans = max(ans, sum);
        }else{
            sum=0;
        }
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
