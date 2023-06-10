// Example program
#include <iostream>
#include <string>
using namespace std;

bool gold(int n){
    int num=n;
    while(num){
        if(num%10==7||num%10==4){
            num=num/10;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cin>>num;
    while(!gold(num)){
        num--;
    }
    cout<<num;
}