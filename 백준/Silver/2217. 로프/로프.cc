// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    sort(arr.begin(),arr.end(),greater<>());
    int max_num=0;
    int count=0;
    for(int i=0;i<n;i++){
        count++;
        max_num=max(max_num,arr[i]*count);
    }
    cout<<max_num;
    
}