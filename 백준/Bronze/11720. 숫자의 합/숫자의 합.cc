#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string temp;
    int case_num;
    cin>>case_num;
    cin>>temp;
    int hap=0;
    for(int i=0;i<case_num;i++)
        hap+=(int)temp[i]-48;//0~9의 아스키코드 값은 48~57이므로 48을 빼줌
    cout<<hap;
}
