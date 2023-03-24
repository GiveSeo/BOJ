// Example program
#include <iostream>

using namespace std;
int gcd(int a,int b);

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
    cout<<(a*b)/gcd(a,b);
}
int gcd(int a,int b){
    int num1=a;
    int num2=b;
    while(num1!=0&&num2!=0){
        if(num1>num2){
            num1=num1%num2;
        }
        else{
            num2=num2%num1;
        }
    }
    int num=num1>num2?num1:num2;
    return num;
}