#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> dp;
    vector<int> arr;
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int max_num=arr[0];
    dp.push_back(arr[0]);
    for(int i=1;i<num;i++){
        dp.push_back(max(dp[i-1]+arr[i],arr[i]));
        max_num=max(max_num,dp[i]);
    }
    cout<<max_num;
}
