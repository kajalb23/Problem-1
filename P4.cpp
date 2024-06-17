//Problem 4
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int findsum(string s){
    int n=s.length();
    int i=0;
    int sum=0;
    while(i<n){
        if(isdigit(s[i])){
            int p=((int)s[i])-48;
            sum=sum+p;
            i++;
        }
        else if(s[i]=='-'){
            if(isdigit(s[i+1])){
                int q=(-1)*((int)s[i+1]-48);
                sum=sum+q;
                i=i+2;
            }
            else if(s[i+1]=='('){
                int p=i+2;
                int sum2=0;
                while(s[p]!=')'){
                    if(isdigit(s[p])){
                        sum2=sum2+(((int)s[p])-48);
                        p++;
                        
                    }
                    else if((s[p]=='-')&&isdigit(s[p+1])){
                        int r=((int)s[p+1]-48)*(-1);
                        sum2=sum2+r;
                        p=p+2;
                        
                    }
                    else{
                        p++;
                        
                    }
                }
                sum=sum-sum2;
                i=p+1;
            }
            
        }
        else i++;
    }
    return sum;
}
int main() {
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"Evaluatin of the string: "<<findsum(s);
    return 0;
}