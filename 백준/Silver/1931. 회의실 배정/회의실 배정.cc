#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;
int main(){
    int N;
    cin>>N;
  vector<pair<int,int>> arr(N);
    for(int i=0;i<N;i++){
        cin>>arr[i].second;
        cin>>arr[i].first;
    }
    
    sort(arr.begin(),arr.end());
    
    int end=-1;
    int count=0;
    for(int i=0;i<N;i++){
        if(arr[i].second>=end){
            end=arr[i].first;
            count++;
        }
    }
    cout<<count<<endl;
}