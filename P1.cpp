// Problem 1
#include <iostream>
using namespace std;
int main() {
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int res=-11111;
    int curr;
    for(int i=a;i<=b;i++){
        curr=0;
        for(int j=0;j<i;j++){
            curr+=arr[j];
        }
        for(int k=1;(k+i-1)<n;k++){
            curr=curr-arr[k-1]+arr[k+i-1];
            res=max(res,curr);
        }
    }
    cout<<res;
    return 0;
}