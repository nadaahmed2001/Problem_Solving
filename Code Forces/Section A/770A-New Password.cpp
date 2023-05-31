#include <iostream>
#include <algorithm>
#include <vector>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
using namespace __gnu_pbds;
using namespace std;


void solve() {
    char Alphabets[]="abcdefghijklmnopqrstuvwxyz";
    int n,k;
    cin>>n>>k;
    string ans="";
    vector <char> v;
    for(int i=0;i<k;i++) v.push_back(Alphabets[i]); //now we have k unique alphabets
    for(int i=0;i<n;i++){
        ans+=v[i%k];
    }
    cout<<ans<<endl;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
   solve();

    return 0;
}
