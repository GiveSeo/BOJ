#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    vector<int> arr;
    for(int i=0;i<N;i++){
        int tempnum;
        cin>>tempnum;
        arr.push_back(tempnum);
    }
    sort(arr.begin(),arr.end(),greater<int>()); 
    int count=0;
    int index=0;
    while(K>0){
        while(arr[index]<=K){
            count+=(K/arr[index]);
            K%=arr[index];
        }
        index++;
    }
    cout<<count<<endl;
}