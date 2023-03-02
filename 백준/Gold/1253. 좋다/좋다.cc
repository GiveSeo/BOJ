#include <iostream>
#include <deque>
using namespace std;
#include <vector>
#include <algorithm>

int main()
{
    cin.tie(NULL);cout.tie(NULL);
    ios::sync_with_stdio(false);
    int count=0;
    vector<int> arr;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
      int temp_num;
      cin>>temp_num;
      arr.push_back(temp_num);
    }
    sort(arr.begin(),arr.end());
    for(int k=0;k<N;k++){
      long target=arr[k];
      int i=0;int j=N-1;
      while(i<j){
        if(arr[i]+arr[j]<target)
          i++;
        else if(arr[i]+arr[j]>target)
          j--;
        else{
          if((i!=k)&&(j!=k)){
            count++;
            break;
          }
          else if(i==k)
            i++;
          else
            j--;
          
        }
      }
    }
    cout<<count;
}