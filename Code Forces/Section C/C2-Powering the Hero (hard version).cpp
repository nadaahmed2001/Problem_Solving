#include <iostream>
#include <queue>
#define endl "\n"
#define ll long long
using namespace std;

void solve() {
    ll n,ans=0;
    cin >> n;
    ll a[n];
    priority_queue<ll> q;
    for (ll i=0; i<n; i++) {
        cin >> a[i];
        if(a[i]==0){
            if(!q.empty()){
                ans+=q.top();
                q.pop();
            }
            else continue;
        }else{
            q.push(a[i]);
        }
    }
    cout<<ans << endl;
   
   
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
