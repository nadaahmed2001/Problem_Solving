#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <iomanip>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;


void solve() {
    int n,target;
    cin>>n>>target;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    int start=0,end=0,sum=0;
    int cntr=0;
    while(end<n){
        sum+=v[end];
        while(sum>target){
            sum-=v[start];
            start++;
        }
        if(sum==target){
            cntr++;
            sum-=v[start];
            start++;
        }
        end++;
    }
    cout<<cntr<<endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();
    return 0;
}