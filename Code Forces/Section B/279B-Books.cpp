#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, t, sum = 0, ans=0;
    cin >> n >> t;
    int *a=new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int j = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (sum <= t) {
            ans++;
        }
        else {
            sum -= a[j];
            j++;
        }
        ans = max(ans, i - j);
    }
    cout << ans;
    return 0;
}
