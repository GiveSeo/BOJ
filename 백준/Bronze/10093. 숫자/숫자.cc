// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    long long temp1;
    long long temp2;
    cin>>temp1>>temp2;
    if(temp1==temp2){
        cout<<"0";
    }
    else{
        long long num1=min(temp1,temp2);
        long long num2=max(temp1,temp2);
    
        cout<<num2-(num1+1)<<"\n";
        for(int i=num1+1;i<num2;i++){
            cout<<i<<" ";
        }        
    }
}