#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int dp[10001];
    vector<int> arr;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int temp_num;
        cin>>temp_num;
        arr.push_back(temp_num);
    }
    
    dp[0]=arr[0];
    dp[1]=arr[0]+arr[1];
    for(int i=2;i<num;i++){
        dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
        dp[i]=max(dp[i],dp[i-3]+arr[i-1]+arr[i]);
    }
    cout<<dp[num-1];
    
}