#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr1[26];
    int arr2[26];
    fill(arr1,arr1+26,0);fill(arr2,arr2+26,0);
    string temp1,temp2;
    cin>>temp1>>temp2;
    for(int i=0;i<temp1.size();i++){
        arr1[temp1[i]-'a']++;        
    }
    for(int i=0;i<temp2.size();i++){
        arr2[temp2[i]-'a']++;        
    }
    int count=0;
    for(int i=0;i<26;i++){
        if(arr1[i]>arr2[i]){
            count+=(arr1[i]-arr2[i]);
        }
        else{
            count+=(arr2[i]-arr1[i]);
        }
    }
    cout<<count<<endl;
}