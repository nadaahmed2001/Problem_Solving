#include <iostream>
#include <queue>
#include <map>
#include <algorithm>
#define endl "\n"
#define ll long long
using namespace std;

ll countLuckyDigits(ll n){
    ll count=0;
    while(n>0){
        ll digit=n%10;
       // cout<<"digit: "<<digit<<endl;
        if(digit==4 || digit==7){
            count++;
        }
        n=n/10;
    }
    return count;
}
bool checkLucky(ll count){
    if (count==0){
        return false;
    }
    while(count>0){
        ll digit=count%10;
        if(digit!=4 && digit!=7){
            return false;
        }
        count=count/10;
    }
    return true;
}
void solve() {
    ll n;
    cin >> n;
    ll count=countLuckyDigits(n);
   // cout<<"count: "<<count<<endl;
    bool flag=checkLucky(count);
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();

    return 0;
}
