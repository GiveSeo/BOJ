#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int main(){
    int N;
    cin>>N;
    vector<int> arr(N,0);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int sum;
    int count=0;
    cin>>sum;
    sort(arr.begin(),arr.end());
    int i=0;int j=arr.size()-1;
    while(i<j){
        if(arr[i]+arr[j]<sum){
            i++;
        }
        else if(arr[i]+arr[j]>sum){
            j--;
        }
        else{
            count++;
            j--;
        }
    }
    cout<<count<<endl;
}