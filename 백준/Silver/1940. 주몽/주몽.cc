#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N,M;
    vector<int> arr;
    
    cin>>N>>M;
    for(int i=0;i<N;i++){
        int temp_num;
        cin>>temp_num;
        arr.push_back(temp_num);
    }
    sort(arr.begin(),arr.end());
    int count=0;
    int first_index=0;
    int end_index=N-1;
    while(first_index<end_index){
        if(arr[first_index]+arr[end_index]==M){
            count++;
            first_index++;
            end_index--;
        }
        else if(arr[first_index]+arr[end_index]<M){
            first_index++;
        }
        else{
            end_index--;
        }
    }
    cout<<count<<"\n";
    
    return 0;
}
