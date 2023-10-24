#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
// #include<ext/pb_ds/assoc_container.hpp>
// #include<ext/pb_ds/tree_policy.hpp>
// #define ordered_set tree<long long, null_type, less<long long>, rb_tree_tag, tree_order_statistics_node_update> // find_by_order, order_of_key
#define endl "\n"
#define ll long long
// using namespace __gnu_pbds;
using namespace std;


void solve() {
    int n;
    cin >> n;
    deque <int> zeros;
    deque <int> pos;
    deque <int> neg;
    for (int i = 0;i < n;i++) {
        int num;
        cin >> num;
        if (num < 0) neg.push_back(num);
        if (num > 0) pos.push_back(num);
        if (num == 0) zeros.push_back(num);
    }
    if (neg.size() % 2 == 0) {//if even -vew numbers .. it will be pos .. so move one number to the third vector
        zeros.push_back(neg.at(neg.size()-1));
       // neg.erase(neg.begin()+ neg.size()-1);
        neg.pop_back();

    }
    if (pos.empty()) { // move two numbers from first vector to the second one
        pos.push_back(neg.at(neg.size()-1));
        pos.push_back(neg.at(neg.size()-2));
        neg.pop_back();
        neg.pop_back();
    }
    cout << neg.size() << " ";
    for (int i = 0; i < neg.size();i++) cout << neg[i]<<" ";
    cout << endl;
    cout << pos.size() << " ";
    for (int i = 0; i < pos.size();i++) cout << pos[i]<<" ";
    cout << endl;
    cout << zeros.size() << " ";
    for (int i = 0; i < zeros.size();i++) cout << zeros[i]<<" ";
    return;
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}