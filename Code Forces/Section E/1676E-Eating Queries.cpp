#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,n,q;
    cin>>t;
    while(t--){
        cin>>n>>q;
        int arr[n + 1], prefix[n + 1] = { 0 };
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        //get the prefix sum of the sorted array
        for(int i=0;i<n;i++){
            if(i!=0)prefix[i]=prefix[i-1]+arr[i];
            else prefix[i]=arr[i];
        }

        while(q--){
            int amountOfSugar;
            cin>>amountOfSugar;
            int ans=0;

            if(amountOfSugar>prefix[n-1]){
                cout<<-1<<"\n";
                continue;
            }
            //find the first prefix with value greater than amountOfSugar
            int index=lower_bound(prefix,prefix+n,amountOfSugar)-prefix;
            cout<<index+1<<"\n";
        }
    }

    return 0;
}
