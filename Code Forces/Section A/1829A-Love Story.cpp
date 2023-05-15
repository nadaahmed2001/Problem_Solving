#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    string s;
    cin>>s;
    string s1="codeforces";
    int ans=0;
    for(int i=0;i<10;i++){
        if(s[i]!=s1[i]){
            ans++;
        }
    }
    cout<<ans<<endl;

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
