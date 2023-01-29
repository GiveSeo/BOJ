#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    while(1){
        cin>>num1>>num2;
        if(cin.eof()==true)//값을 입력받지 못하면 바로 종료
            break;
        cout<<num1+num2<<endl;
    }
}