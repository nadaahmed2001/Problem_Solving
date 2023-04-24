#include <iostream>
#include <vector>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll n;
    cin>>n;
    vector <ll> a(n);
    vector <ll> prefix(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.begin(),a.end());
    for(ll i=0;i<n;i++){
        if(i==0) prefix[i]=a[i];
        else prefix[i]=prefix[i-1]+a[i];
    }
    ll middle=a[n/2];
    ll cost=0;
    for(ll i=0;i<n;i++){
        cost+=abs(a[i]-middle);
    }
    cout<<cost<<endl;
    
    return 0;
}