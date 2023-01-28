#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    while(1){
        string temp;
        getline(cin,temp);//공백을 포함하여 입력받음
        if(temp=="")//입력받은게 공백이면 반복문 종료
            break;
        cout<<temp<<endl;
    }
}
