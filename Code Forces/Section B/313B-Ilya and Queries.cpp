#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;



void solve() {
    string s;
    cin >> s;
    vector <int> freq(s.length(),0);//hold num of pairs from 0 to i
    freq[0]=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]) freq[i]=freq[i-1]+1;
        else freq[i]=freq[i-1];
    }
   // for(int i=0;i<freq.size();i++) cout<<freq[i]<<" ";
    int n;
    cin >> n;
    int x, y;
    while (n--) {
        cin >> x >> y;
        cout<<freq[y-1]-freq[x-1]<<endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}