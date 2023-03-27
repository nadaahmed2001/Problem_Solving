#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long t, n, q;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        long long arr[n + 1], prefix[n + 1] = { 0 };
        for (long long i = 1; i <= n; i++) {
            cin >> arr[i];
            prefix[i] = prefix[i - 1] + arr[i];

        }
        for (long long i = 0; i < q; i++) {
            long long l, r, k;
            cin >> l >> r >> k;
            //             sum        -  old part                   + new part
            long long ans = prefix[n] - (prefix[r] - prefix[l - 1]) + k * (r - l + 1);
            /*
            cout<<"prefix[n] = "<<prefix[n]<<endl;
            cout<<"prefix[r] = "<<prefix[r]<<endl;
            cout<<"prefix[l-1] = "<<prefix[l-1]<<endl;
            cout<<"(r-l+1) = "<<(r-l+1)<<endl;
            cout<<"(r-l+1)*k = "<<(r-l+1)*k<<endl;
            cout<<"ans = "<<ans<<endl;
            */
            if (ans % 2 == 1) {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
