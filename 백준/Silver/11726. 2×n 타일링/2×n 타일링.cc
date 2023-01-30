#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dp[1001];
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=1000;i++)
        dp[i]=(dp[i-1]+dp[i-2])%10007;//n-2개 의 타일의 경우의수 에서 2*1타일 두개로 n길이의 타일 만드는 경우의수 +n-1개 의 타일의 경우의수 에서 1*2타일 하나로 n길이의 타일 만드는 경우의수 
    int num;
    cin>>num;
    cout<<dp[num]%10007;
}