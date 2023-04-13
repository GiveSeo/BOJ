// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> arr;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),greater<int>());
    for(int i=0;i<N;i++){
        cout<<arr[i]<<"\n";
    }    
}