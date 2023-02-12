#include <iostream>

using namespace std;

int main()
{
    long arr[91][2]={0,};//arr[숫자 자릿수][맨 마지막으로 끝나는 숫자]
    arr[1][0]=0;arr[1][1]=1;//0으로 시작할 순 없다.
    int num;
    cin>>num;
    for(int i=2;i<=num;i++){
        arr[i][0]=arr[i-1][0]+arr[i-1][1];//맨 마지막 숫자가 0이려면 앞이 1, 0 둘다 괜찮다.
        arr[i][1]=arr[i-1][0];//맨 마지막 숫자가 1이려면 앞이 0이어야 한다.
    }
    cout<<arr[num][0]+arr[num][1]<<endl;

    return 0;
}
