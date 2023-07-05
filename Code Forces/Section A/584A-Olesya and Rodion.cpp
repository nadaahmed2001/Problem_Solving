#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
using namespace __gnu_pbds;
using namespace std;


void solve(){
    int n,t;
    cin>>n>>t;
    if(t!=10){
        cout<<t<<string(n-1,'0')<<endl; //ex: 3 5 -> 5 0 0
    }else if(n==1) cout<<-1<<endl; //ex: 1 10 -> -1
    else{
        cout<<t<<string(n-2,'0')<<endl; //ex: 3 10 -> 100
    }
    
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
