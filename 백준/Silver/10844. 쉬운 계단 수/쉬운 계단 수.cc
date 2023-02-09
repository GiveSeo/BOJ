#include <iostream>
#include <algorithm>


using namespace std;

int main()
{
    int cipher;
    cin>>cipher;
    long long dp[101][10];//dp[자릿수][맨 마지막 끝나는 숫자]
    dp[1][0]=0;dp[1][1]=1;dp[1][2]=1;dp[1][3]=1;dp[1][4]=1;dp[1][5]=1;dp[1][6]=1;dp[1][7]=1;dp[1][8]=1;dp[1][9]=1;//초깃값 배정
    for(int k=2;k<=100;k++){
        for(int i=0;i<=9;i++){
            if(i==0)//맨 마지막 자리가 0이려면 그 앞에 자리가 1인수만 맨마지막 자리가 0이 될 수 있다.
                dp[k][i]=dp[k-1][i+1];
            else if(i==9)//맨 마지막 자리가 9이려면 그 앞에 자리가 8인수만 맨마지막 자리가 0이 될 수 있다.
                dp[k][i]=dp[k-1][i-1];
            else
                dp[k][i]=(dp[k-1][i-1]+dp[k-1][i+1]);
            dp[k][i]%=1000000000;
        }  
    }
    
    long long answer=0;
    for(int i=0;i<10;i++)
        answer+=dp[cipher][i]%1000000000;
    cout<<answer%1000000000;
}