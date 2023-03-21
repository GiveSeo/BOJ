#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<double> arr(3);
    while(1){
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr.begin(),arr.end());//정렬
        if(arr[0]==0&&arr[1]==0&&arr[2]==0){
            break;
        }
        if(pow(arr[0],2)+pow(arr[1],2)==pow(arr[2],2)){
            cout<<"right"<<endl;
        }
        else{
            cout<<"wrong"<<endl;
        }
    }
}