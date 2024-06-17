//Problem 3
#include <iostream>
using namespace std;
int xorSum(int arr[],int n,int a,int b){
    int p=arr[a-1];
    for(int i=a;i<b;i++){
        p=p^(arr[i]);
    }
    return p;
}
int main() {
    int n,t;
    // cout<<"Enter n: ";
    cin>>n>>t;
    // int t;
    // cout<<"Enter number of test cases: ";
    // cin>>t;
    int arr[n];
    // cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    while(t--){
        
        //cout<<"Enter the range: ";
        int a,b;
        cin>>a>>b;
        // cout<<"Your XOR Sum: ";
        cout<<xorSum(arr,n,a,b)<<endl;
        
    }
    return 0;
}