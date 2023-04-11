#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, q;
    cin >> n >> q;
    long long* arr= new long long[n];
    long long* prefix = new long long[n];
    for (long long i = 0; i < n; i++) cin >> arr[i];
    sort(arr, arr + n, greater<long long>());
    //get prefix of sorted array
    for (long long i = 0; i < n; i++) {
        if (i == 0) prefix[i] = arr[i];
        else prefix[i] = prefix[i - 1] + arr[i];
    }
    while (q--) {
        long long x, y, ans;
        cin >> x >> y;
        if(x==y) ans=prefix[x-1];
        //prefix from x-y to x
        else ans = prefix[x - 1] - prefix[x - y - 1];
        cout << ans << "\n";
    }

    return 0;
}
