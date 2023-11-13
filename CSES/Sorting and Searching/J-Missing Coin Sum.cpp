#include <iostream>
#include <algorithm>
#include <vector>
#define endl "\n"
#define ll long long
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,ans=1;
    cin>>n;
    vector<ll> v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    for(ll i=0;i<n;i++){
        if(ans<v[i]) break;
        ans+=v[i];
    }
    cout<<ans<<endl;
    return 0;
}