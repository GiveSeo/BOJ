#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string temp;
    cin>>temp;
    int count=temp.size();//총 글자수 수
    int current=0;//현재 출력 글자 index수
    for(int i=1;i<=count;i++){
        if(i%10==0)
            cout<<temp[i-1]<<endl;
        else
            cout<<temp[i-1];
    }
}