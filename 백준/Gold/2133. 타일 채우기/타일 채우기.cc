// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int dp[31]={0,};
    dp[2]=3;
    dp[4]=11;
    for(int i=6;i<31;i=i+2){
        dp[i]=dp[i-2]*3;
        for(int j=i-4;j>=0;j-=2){
            dp[i]+=dp[j]*2;
        }
        dp[i]+=2;
    }
    int N;
    cin>>N;
    cout<<dp[N];
}