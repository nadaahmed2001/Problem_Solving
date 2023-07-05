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
    int n;
    cin >> n;
    int ans = 0;
    string s;
    while(n--){
        cin>>s;
        if(s=="Icosahedron"){
            ans+=20;
        }
        else if(s=="Cube"){
            ans+=6;
        }
        else if(s=="Tetrahedron"){
            ans+=4;
        }
        else if(s=="Octahedron"){
            ans+=8;
        }
        else if(s=="Dodecahedron"){
            ans+=12;
        }
    }
    cout<<ans<<endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}