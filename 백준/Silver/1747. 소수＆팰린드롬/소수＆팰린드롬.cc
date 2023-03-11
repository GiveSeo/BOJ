#include <algorithm>
#include <iostream>
#include <string>
#include <math.h>
#include <vector>

using namespace std;

bool palin(int n);

int main()
{
    int M,N;
    cin>>N;
    vector<bool> arr(2000001,true);
    arr[0]=false;arr[1]=false;
    for(int i=2;i<=2000000;i++){
        if(!arr[i]){continue;}
        for(int j=i*2;j<=2000000;j+=i){
            arr[j]=false;
        }
    }
    for(int i=N;i<=2000000;i++){
        if(arr[i]){
            if(palin(i)){
                cout<<i;
                break;
            }
        }
    }
    return 0;
}

bool palin(int n){
    string temp= to_string(n);
    int i=0;int j=temp.size()-1;
    
    while(i<j){
        if(temp[i]!=temp[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}