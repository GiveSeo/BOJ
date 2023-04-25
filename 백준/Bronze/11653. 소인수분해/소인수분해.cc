// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cin>>a;
    int i=2;
    while(a!=1||a==i){
        if(a%i==0){
            cout<<i<<"\n";
            a=a/i;
            i=2;
        }
        else{
            i++;
        }
    }
}