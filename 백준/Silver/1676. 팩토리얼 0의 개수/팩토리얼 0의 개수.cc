// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<pair<int,int>> dp(501);
    for(int i=1;i<=500;i++){
        int temp=i;
        int count_2=0;
        int count_5=0;
        while((temp%2==0)||(temp%5==0)){
            if(temp%5==0){
                count_5++;
                temp/=5;
            }
            else if(temp%2==0){
                count_2++;
                temp/=2;
            }
        }
        dp[i]=make_pair(count_2,count_5);
    }
    int num;
    cin>>num;
    int count_2=0;
    int count_5=0;
    for(int i = 1;i<=num;i++){
        count_2+=dp[i].first;
        count_5+=dp[i].second;
    }
    cout<<min(count_2,count_5);
}