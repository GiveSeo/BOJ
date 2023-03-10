#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;


int main()
{
    int M,N;
    cin>>N>>M;
    vector<bool> arr(M+1,true);
    arr[0]=false;arr[1]=false;
    for(int i=2;i<=M;i++){
        if(!arr[i]){continue;}
        for(int j=i*2;j<=M;j+=i){
            arr[j]=false;
        }
    }
    for(int i=N;i<=M;i++){
        if(arr[i]){
            cout<<i<<"\n";
        }
    }
}