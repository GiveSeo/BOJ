#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int dp[15][15]={0,};
    for(int i=0;i<15;i++){
        dp[0][i]=i;
    }
    for(int i=1;i<15;i++){
        for(int k=0;k<15;k++){
            for(int l=0;l<=k;l++){
                dp[i][k]+=dp[i-1][l];
            }
        }
    }
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        int k,n;
        cin>>k>>n;
        cout<<dp[k][n]<<"\n";
    }
}