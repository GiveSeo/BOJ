// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> arr1;
    vector<int> arr2;
    for(int i=0;i<3;i++){
        int temp;
        cin>>temp;
        arr1.push_back(temp);
    }
    for(int i=0;i<2;i++){
        int temp;
        cin>>temp;
        arr2.push_back(temp);
    }
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    cout<<arr1[0]+arr2[0]-50;
}