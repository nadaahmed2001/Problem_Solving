#include <iostream>
#include <map>
#define endl "\n"
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n,maax=-1,cnt=0;
    cin>>n;
    ordered_set s;
    map <int,int> myMap; //arrival and leaving time
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        myMap[a]=b;
        s.insert(a);
        s.insert(b);
    }
    //loop over ordered set
    for(ordered_set::iterator it=s.begin();it!=s.end();it++){
        int x=*it;
        if(myMap.find(x)!=myMap.end()){
            //x is arrivel time
            cnt++;
        }else{ //x is leaving time
            cnt--;
        }
        maax=max(maax,cnt);        
    }
    cout<<maax<<endl;  
    return 0;
}