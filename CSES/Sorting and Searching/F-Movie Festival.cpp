#include <iostream>
#include <map>
#define endl "\n"
using namespace std;


int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    map<int,int> myMap;//start and end time
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        myMap[y]=x;
    }
    int count=0;
    int temp=0;
    for(map<int, int>::iterator it=myMap.begin();it!=myMap.end();it++){
        if(it->second>=temp){
            count++;
            temp=it->first;//save the end time
        }
        
    }
    cout<<count<<endl;

    return 0;
}