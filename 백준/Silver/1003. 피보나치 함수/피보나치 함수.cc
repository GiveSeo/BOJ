// Example program
#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector<pair<int,int>> dp(41);
    dp[1]=make_pair(0,1);
    dp[0]=make_pair(1,0);
    for(int i=2;i<=40;i++){
        dp[i].first=dp[i-2].first+dp[i-1].first;
        dp[i].second=dp[i-2].second+dp[i-1].second;
    }
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        cout<<dp[temp].first<<" "<<dp[temp].second<<"\n";
    }
}