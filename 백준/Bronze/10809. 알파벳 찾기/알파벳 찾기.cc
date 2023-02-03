#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int arr[26];
    memset(arr,-1,sizeof(arr));//arr를 -1로 초기화.
    string temp;
    cin>>temp;
    for(int i=0;i<temp.length();i++){
        if(arr[(int)temp[i]-97]==-1)//a의 아스키코드는 97이다.
            arr[(int)temp[i]-97]=i;//자리수가 입력된적이 없을 경우, 자리수를 배열에 입력.
    }
    for(int i=0;i<26;i++)
        cout<<arr[i]<<" ";
}