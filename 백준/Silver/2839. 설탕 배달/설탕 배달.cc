// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    vector<int> arr(5001,5000);
    arr[3]=1;
    arr[5]=1;
    for(int i=5;i<5001;i++){
        if((arr[i-3])!=5000){
            arr[i]=min(arr[i],arr[i-3]+1);
        }
        if((arr[i-5])!=5000){
            arr[i]=min(arr[i],arr[i-5]+1);
        }
    }
    int N;
    cin>>N;
    if(arr[N]==5000){
        cout<<"-1"<<endl;
    }
    else{
        cout<<arr[N]<<endl;
    }
}