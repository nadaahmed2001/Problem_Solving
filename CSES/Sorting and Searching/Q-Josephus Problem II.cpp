#include <iostream>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,k;
    cin>>n>>k;
    ordered_set s;
    for(int i=0;i<n;i++){
        s.insert(i+1);
    }
    int start=0;
    while(s.size()>0){
        start=(start+k)%s.size();
        cout<<*s.find_by_order(start)<<" ";
        s.erase(s.find_by_order(start));
    }

    return 0;
}
