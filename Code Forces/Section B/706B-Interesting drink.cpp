#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, days, coins, ans = 0;
    vector<int>prices;
    cin >> n;
    int temp = n;
    while (temp--)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }
    sort(prices.begin(), prices.end());
    cin >> days;
    while (days--) {
        cin >> coins;
        //get the first number greater than my coins
        ans = upper_bound(prices.begin(), prices.end(), coins) - prices.begin();
        cout << ans << "\n";
    }
    return 0;
}