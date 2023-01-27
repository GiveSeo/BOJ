#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    for(int i=1;i<=test_case;i++){
        int num1,num2;
        cin>>num1>>num2;
        cout<<"Case #"<<i<<": "<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;         
    }
}