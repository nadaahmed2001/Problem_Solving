#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n >> k;
    int *arr=new int[n];
    int* prefix = new int[n];
    multimap<int, int> mp;//element and index
    vector<int> indexes;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mp.insert(make_pair(arr[i], i));
    }
    sort(arr, arr + n);
    //get prefix of sorted array
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) prefix[i] = arr[i];
        else prefix[i] = prefix[i - 1] + arr[i];

        if (prefix[i] <= k && ans < k) {
            ans++;
            //save this index of arr[i]
            indexes.push_back(mp.find(arr[i])->second); //find the index of arr[i] in map
            //delete this element from map (to handle duplicate indexes)
            mp.erase(mp.find(arr[i]));
        }
            
        else break;
    }
    sort(indexes.begin(), indexes.end());
    cout << ans<<"\n";
    for(int i=0;i<indexes.size();i++) cout<<indexes[i]+1<<" ";

    return 0;
}
