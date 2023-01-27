#include <iostream>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    
    for(int i=0;i<test_case;i++){
        int num1,num2;
        scanf("%d,%d",&num1,&num2);
        if((num1==0)&&(num2==0))    break;
        cout<<num1+num2<<endl;        
    }
}