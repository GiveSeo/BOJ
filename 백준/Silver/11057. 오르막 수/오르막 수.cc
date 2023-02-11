#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[10][1001]={0,};//[끝나는 숫자][숫자의 자리수]
    int num;
    cin>>num;
    arr[1][1]=1;arr[2][1]=1;arr[3][1]=1;arr[4][1]=1;arr[5][1]=1;arr[6][1]=1;arr[7][1]=1;arr[8][1]=1;arr[9][1]=1;arr[0][1]=1;//초깃값 설정.
    for(int i=2;i<=num;i++){
        for(int l=0;l<10;l++){
            for(int k=0;k<=l;k++){
                arr[l][i]=(arr[k][i-1]+arr[l][i]);//i-1자리의 숫자중 끝나는 숫자가 같거나 작은 수들을 더한다.
                arr[l][i]=arr[l][i]%10007;
            }            
        }
    }
    int ans=0;
    for(int i=0;i<10;i++){
        ans+=arr[i][num]%10007;
    }
    cout<<ans%10007;
}