#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<long long> dp(101); // dp[100]의 값이 int의 최댓값을 넘음
    dp[1]=1;dp[2]=1;dp[3]=1;dp[4]=2;dp[5]=2;dp[6]=3;
    for(int i=7;i<=100;i++){
        dp[i]=dp[i-5]+dp[i-1];
    }
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        cout<<dp[temp]<<"\n";
    }
}