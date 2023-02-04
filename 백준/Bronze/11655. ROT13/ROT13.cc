#include <iostream>

using namespace std;

int main()
{
    string temp;
    getline(cin,temp);
    for(int i=0;i<temp.length();i++){
        if(temp[i]>=65&&temp[i]<=90){//A의 아스키코드는 65, Z의 아스키코드는 90 이므로, 그 사이면 13을 더하고 모듈러 연산
            temp[i]=temp[i]-65;
            temp[i]=((temp[i]+13)%26)+65;
            
        }
        else if(temp[i]>=97&&temp[i]<=122){//a의 아스키코드는 97, z의 아스키코드는 122 이므로, 그 사이면 13을 더하고 모듈러 연산
            temp[i]=temp[i]-97;
            temp[i]=((temp[i]+13)%26)+97;
        }
    }
    for(int i=0;i<temp.length();i++)
        cout<<temp[i];
}
