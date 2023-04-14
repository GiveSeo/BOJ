// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int num1,num2,num3;
    cin>>num1>>num2>>num3;
    if((num1==num2)&&(num2==num3)){
        cout<<10000+1000*(num1);
    }
    else if((num1!=num2)&&(num2!=num3)&&(num1!=num3)){
        int max_num=max(num1,num2);
        max_num=max(max_num,num3);
        cout<<100*(max_num);
    }
    else{
        if(num1==num2){
            cout<<1000+100*(num1);
        }
        else if(num2==num3){
            cout<<1000+100*(num2);
        }
        else{
            cout<<1000+100*(num3);
        }
    }
}