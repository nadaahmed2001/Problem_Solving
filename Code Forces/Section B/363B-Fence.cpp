#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, k;
    cin >> n>>k;
    int* arr = new int[n];
    int* prefix = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i == 0) prefix[i] = arr[i];
        else prefix[i] = prefix[i - 1] + arr[i];

    }
    int min = 1e9;
    int sum=0,index;
    for(int i=0; i<= n-k; i++){
        if(i==0) sum = prefix[k-1];
        else sum = prefix[i+k-1]-prefix[i-1];
        if(sum < min){
         min=sum;
         index=i+1;
        }
    }
    cout<<index;
    return 0;
}
