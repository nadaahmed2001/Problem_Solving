#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long n, m, l, r, type;
    cin >> n;
    long long* arr = new long long[n];
    long long* prefix = new long long[n];
    long long* sortedArr = new long long[n];
    long long* sortedPrefix = new long long[n];
    
    for (long long i = 0; i < n; i++) {
        cin >> arr[i];
        sortedArr[i] = arr[i];
        if (i == 0) prefix[i] = arr[i];
        else prefix[i] = prefix[i - 1] + arr[i];
    }

    sort(sortedArr, sortedArr + n);//non-decreasing order
    //get prefix of sorted array

    for (long long i = 0; i < n; i++) {
        if (i == 0) sortedPrefix[i] = sortedArr[i];
        else sortedPrefix[i] = sortedPrefix[i - 1] + sortedArr[i];
    }

    cin >> m;
    for (long long i = 0; i < m; i++) {
        cin >> type >> l >> r;
        if (type == 1) {
            //get sum from l to r
           // cout << "Prefix from " << l << " to " << r << " is: ";
            if(l==1) cout << prefix[r - 1] << "\n";
            else cout << prefix[r - 1] - prefix[l - 2] << "\n";

        }
        else {
            //get sum from l to r from the sorted array
           // cout << "Prefix from " << l << " to " << r << " is: ";
            if(l==1) cout << sortedPrefix[r - 1] << "\n";
            else cout << sortedPrefix[r - 1] - sortedPrefix[l - 2] << "\n";
        }

    }

    return 0;
}
