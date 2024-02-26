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



void solve() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    sort(v.begin(),v.end());
    int split=n/2; //points to the first element in the second half
    int ans=n;//assume all kangaros are visible
    for(int i=0;i<n/2;i++){
        while(true){
            if(v[i]*2<=v[split]){
                ans--; //not visible anymore
                split++;//check if the next one can hold a cangaro
                break;
            }
            else split++;

            if(split==n)break;
        }
        if(split==n) break;
    }
    cout<<ans;


}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}