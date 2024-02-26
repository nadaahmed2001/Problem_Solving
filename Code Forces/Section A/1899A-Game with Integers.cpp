#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <map>
#include <set>
#include <string>
#include <iomanip>
#define endl "\n"
#define ll long long
using namespace std;

string winner(int n){
    if(n%3==0) return"Second";
    else return "First";

    
}
void solve() {
    int n;cin>>n;
    cout<<winner(n)<<endl;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;cin>>t;
    while(t--){solve();}
    return 0;
}