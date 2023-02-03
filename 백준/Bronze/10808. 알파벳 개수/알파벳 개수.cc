#include <iostream>
#include <cstring>

using namespace std;
int main(){
    int arr[26];
    memset(arr,0,sizeof(arr));//arr를 0로 초기화.
    string temp;
    cin>>temp;
    for(int i=0;i<temp.length();i++){
        arr[(int)temp[i]-97]++;
    }
    for(int i=0;i<26;i++)
        cout<<arr[i]<<" ";
}