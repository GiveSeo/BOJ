#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);    
    int arr[10001]={0,};//숫자의 빈도를 적는 배열
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        int temp;
        cin>>temp;
        arr[temp]++;//그 숫자의 빈도를 증가시킴
    }
    
    for(int i=1;i<=10000;i++){
        for(int k=1;k<=arr[i];k++)//1번 이상 나왔으면 나온 수만큼 출력
            cout<<i<<"\n";
    }
}