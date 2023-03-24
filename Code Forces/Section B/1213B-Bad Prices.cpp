#include <iostream>
#include<vector>
using namespace std;

int main()
{
    long long tests, n;
    vector<long long>v;//prices
    cin >> tests;
    while (tests--) {
        cin >> n;
        for (long long i = 0; i < n; i++) {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        long long minimum = 1e9;
        long long badPrices = 0;
        for (long long i = n - 1; i >= 0; i--) {
            if (v.at(i) > minimum) badPrices++;
            else minimum = v.at(i);
        }
        cout << badPrices << "\n";
        v.clear();
    }

    return 0;
}