#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int dp[12];
    dp[1]=1;
    dp[2]=2;
    dp[3]=4;
    for(int i=4;i<=11;i++)
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];//i-1의 경우의 수에 1 더한 수+ i-2의 경우의 수에 2 더한 수+i-3의 경우의 수에 3 더한 수
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        int num1;
        cin>>num1;
        cout<<dp[num1]<<endl;
    }
}