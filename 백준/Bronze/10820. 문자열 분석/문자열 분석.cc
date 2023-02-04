#include <iostream>

using namespace std;

int main()
{
    string temp="string";
    while(1){
        if(!getline(cin,temp))
            break;
        int count_B=0;//대문자 카운트 변수
        int count_s=0;//소문자 카운트 변수
        int count_n=0;//숫자 카운트 변수
        int count_g=0;//공백 카운트 변수
        for(int i=0;i<temp.length();i++){
            if(temp[i]>=65&&temp[i]<=90)
                count_B++;
            else if(temp[i]>=97&&temp[i]<=122)
                count_s++;
            else if(temp[i]==' ')
                count_g++;
            else if(temp[i]>=48&&temp[i]<=57)
                count_n++;
        }
        cout<<count_s<<" "<<count_B<<" "<<count_n<<" "<<count_g<<"\n";
    }
}