// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int arr [28]={0,};
        int barr[28]={0,};
        bool ans=true;
        string temp1,temp2;
        cin>>temp1>>temp2;
        for(int i=0;i<temp1.size();i++){
            arr[temp1[i]-'a']++;
            barr[temp2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(arr[i]!=barr[i]){
                ans=false;
                break;
            }
        }
        if(ans){cout<<"Possible"<<"\n";}
        else{cout<<"Impossible"<<"\n";}
    }
}