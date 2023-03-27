#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
    vector<bool> arr(1001,true);
    arr[1]=false;
    for(int i=2;i<=1000;i++){
        if(arr[i]){
            for(int j=i+i;j<=1000;j=i+j){
                arr[j]=false;
            }            
        }
    }
    int N;
    cin>>N;
    int count=0;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        if(arr[temp]){
            count++;
        }
    }
    cout<<count<<endl;
}
