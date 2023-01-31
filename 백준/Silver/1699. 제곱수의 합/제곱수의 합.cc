#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dp[1000001];
    int num;
    cin>>num;
    dp[3]=2;
    for(int i=1;i<=num;i++)//모든 수는 1+1+...로 나타낼수 있으므로 
        dp[i]=i;
    for(int i=1;i*i<=num;i++)//제곱수는 한가지의 경우의수로 나타날 수 있으므로 1로 지정
        dp[i*i]=1;
    for(int i=1;i<=num;i++){
        for(int k=1;(k*k)<i;k++){
            dp[i]=min(dp[i],dp[i-k*k]+1);
        }
    }
    cout<<dp[num];
}