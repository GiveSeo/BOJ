#include <vector>
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    vector<int> arr;
    int dp[301];
    for(int i=0;i<num;i++){
        int temp_num;
        cin>>temp_num;
        arr.push_back(temp_num);
        
    }
    dp[0]=arr[0];
    dp[1]=arr[0]+arr[1];
    dp[2]=max(arr[0]+arr[2],arr[1]+arr[2]);
    for(int i=3;i<num;i++){
        dp[i]=max(arr[i]+arr[i-1]+dp[i-3],dp[i-2]+arr[i]);
    }
    
    cout<<dp[num-1];

    return 0;
}
