#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n,x,ans=0;
    cin>>n>>x;
    
    vector<ll> weights;
    for(ll i=0;i<n;i++){
        ll w;
        cin>>w;
        weights.push_back(w);
    }
    sort(weights.begin(),weights.end());
    ll i=0;
    for(ll j=n-1;j>=i;j--){
        if(weights.at(i)+weights.at(j) <= x){
            i++;
        }
        ans++;

    }
    cout<<ans<<"\n";

    return 0;
}