#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <queue>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;

void solve()
{
    int n,d;
    cin>>n>>d;
    deque<int> dq;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }
    while(d--){
        int num=dq.front();
        dq.pop_front();
        dq.push_back(num);
    }
    for(auto x:dq)
        cout<<x<<" ";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();

    return 0;
}