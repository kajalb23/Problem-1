//Problem 2
#include <iostream>
using namespace std;
void triplets(int arr[],int n,int x){
    bool c=false;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j]+arr[k])==x){
                    c=true;
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    
                }
            }
        }
    }
    if(c==false) cout<<"No triplets exist";
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter sum to be formed by array: ";
    cin>>x;
    triplets(arr,n,x);
    return 0;
}//Problem 2
#include <iostream>
using namespace std;
void triplets(int arr[],int n,int x){
    bool c=false;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if((arr[i]+arr[j]+arr[k])==x){
                    c=true;
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k];
                    
                }
            }
        }
    }
    if(c==false) cout<<"No triplets exist";
}
int main() {
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter sum to be formed by array: ";
    cin>>x;
    triplets(arr,n,x);
    return 0;
}