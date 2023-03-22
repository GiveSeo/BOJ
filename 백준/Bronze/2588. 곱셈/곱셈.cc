// Example program
#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;
int main()
{
    string temp1,temp2;
    cin>>temp1>>temp2;
    int num1=stoi(temp1);
    int num2=stoi(temp2);
    int sum1=temp2[2] - '0';
    int sum2=temp2[1] - '0';
    int sum3=temp2[0] - '0';
    
    cout<<num1*sum1<<endl;
    cout<<num1*sum2<<endl;
    cout<<num1*sum3<<endl;
    cout<<num1*num2<<endl;
}