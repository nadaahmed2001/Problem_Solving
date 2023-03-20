#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m, elem,ans;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;
    for (int i = 0; i < n; i++) {
        cin >> elem;
        v1.push_back(elem);
    }
    sort(v1.begin(), v1.end());

    for (int i = 0; i < m; i++) {
        cin >> elem; 
        ans = upper_bound(v1.begin(), v1.end(), elem) - v1.begin();
        cout << ans<<" ";
    }
    return 0;
}