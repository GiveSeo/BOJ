// Example program
#include <iostream>
#include <string>

using namespace std;
int main()
{
    string temp1,temp2;
    string temp3,temp4;
    cin>>temp1>>temp2;
    cin>>temp3>>temp4;
    temp1=temp1+temp2;
    temp3=temp3+temp4;
    long long temp_num1=stoll(temp1);
    long long temp_num2=stoll(temp3);
    
    cout<<temp_num1+temp_num2<<endl;
    
}