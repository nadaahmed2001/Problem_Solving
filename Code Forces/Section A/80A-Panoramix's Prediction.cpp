#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long int
using namespace __gnu_pbds;
using namespace std;


void solve() {
	int n,m,i;
    cin>>n>>m;
    bool flag = true;
    for(i=n+1;i<=m;i++){
        flag = true;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                flag = false;
                break;
            }
        }
        if(flag==true){
            break;
        }
    }
    if(flag==true && m==i){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}




int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}