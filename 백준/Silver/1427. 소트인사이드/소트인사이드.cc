#include <iostream>
#include <deque>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    cin.tie(NULL);cout.tie(NULL);
    ios::sync_with_stdio(false);
    string temp;
    cin>>temp;
    vector<int> arr(temp.size(),0);
    for(int i=0;i<temp.size();i++){
      arr[i]=stoi(temp.substr(i,1));
    }
    for(int i=0;i<arr.size();i++){
      int max=i;
      for(int k=i;k<arr.size();k++){
        if(arr[max]<arr[k]){
          max=k;
        }
      }
      int temp_num=arr[max];
      arr[max]=arr[i];
      arr[i]=temp_num;
    }
    for(int i=0;i<arr.size();i++)
      cout<<arr[i];
}