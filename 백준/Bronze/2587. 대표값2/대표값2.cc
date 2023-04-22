// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int total=0;
    vector<int> arr;
    for(int i=0;i<5;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
        total+=temp;
    }
    sort(arr.begin(),arr.end());
    cout<<total/5<<endl;
    cout<<arr[2]<<endl;
}