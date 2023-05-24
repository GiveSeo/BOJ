// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=0;
    for(int k=n-1;k>0;k--){
        if(arr[k]<=arr[k-1]){
            ans+=(arr[k-1]-arr[k])+1;
            arr[k-1]=arr[k]-1;
        }
    }
    cout<<ans;
}