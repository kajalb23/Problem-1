// Problem 5
#include <iostream>
using namespace std;
int main() {
    int n;
    float sum;
    cout<<"Enter n: ";
    cin>>n;
    int a[n];
    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t;
    cout<<"Enter number of test cases: ";
    cin>>t;
    while(t--){
        int l,r;
        cout<<"Enter L & R: ";
        cin>>l>>r;
        sum=0;
        for(int i=l;i<=r;i++){
           sum=sum+(a[i]/((float)2)); 
        }
        cout<<sum<<endl;
    }
    return 0;
}