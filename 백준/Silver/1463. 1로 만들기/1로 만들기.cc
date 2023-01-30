#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dp[1000001];
    dp[1]=0;
    dp[2]=1;
    dp[3]=1;
    for(int i=4;i<=1000001;i++){
        dp[i]=1000002;//일단 가장 큰 수로 설정
        if((i%2)==0)//2로 나누어 지면 2로 나눈 뒤 연산 최소값 또는 기존값중 작은 것 사용
            dp[i]=min(dp[i/2]+1,dp[i]);
        if((i%3)==0)//3으로 나누어 지면 3로 나눈 뒤 연산 최소값 또는 기존값중 작은 것 사용
            dp[i]=min(dp[i],dp[i/3]+1);
        dp[i]=min(dp[i],dp[i-1]+1);//1로 뺀 숫자의 연산 최소값 또는 기존값중 작은 것 사용
    }
    int num;
    cin>>num;
    cout<<dp[num];
}