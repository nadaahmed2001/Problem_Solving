    #include <iostream>
    #include <algorithm>
    #include <vector>
    #include <string>
    #include <map>
    // #include<ext/pb_ds/assoc_container.hpp>
    // #include<ext/pb_ds/tree_policy.hpp>
    // #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
    #define endl "\n"
    #define ll long long
    // using namespace __gnu_pbds;
    using namespace std;
     
     
    void solve() {
        string s1, s2;
        getline(cin, s1);
        getline(cin, s2);
        map<char, int> m; //letter, count
        // cout<<"Number of a: "<<m['a']<<endl;
        for(char c: s1) m[c]++;
        //delete spaces from s2
        s2.erase(remove(s2.begin(), s2.end(), ' '), s2.end());
        for(char c: s2) m[c]--;
        for(auto it:m){
            if(it.second<0){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
     
     
    int main() {
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        solve();
     
        return 0;
    }