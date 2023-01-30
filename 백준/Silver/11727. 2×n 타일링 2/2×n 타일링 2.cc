#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dp[1001];
    dp[1]=1;
    dp[2]=3;//2*1블록 2개, 1*2 블록 두개, 2*2 블록 하나.
    for(int i=3;i<=1000;i++)
        dp[i]=(dp[i-1]+2*dp[i-2])%10007;//n-2개 의 타일의 경우의수 에서 2*1타일 두개 또는 2*2 타일 하나로 n길이의 타일 만드는 경우의수 +n-1개 의 타일의 경우의수 에서 1*2타일 하나로 n길이의 타일 만드는 경우의수 
    int num;                            //위에 코드를 10007로 나눈 이유는 너무 커짐을 방지하기 위함(모듈러 연산 분배법칙 참고.)
    cin>>num;
    cout<<dp[num]%10007;
}