// Example program
#include <iostream>
#include <string>
using namespace std;

int arr[11][11]={0, };//arr[n][i] : n개중 i개 선택
int main()
{
    for(int i=1;i<=10;i++){
        arr[i][0]=1;
        arr[i][i]=1;
        arr[i][1]=i;
    }
    for(int i=2;i<=10;i++){
        for(int j=1;j<i;j++){
            arr[i][j]=arr[i-1][j-1]+arr[i-1][j];
        }
    }
    int N,K;
    cin>>N>>K;
    cout<<arr[N][K]<<endl;
}