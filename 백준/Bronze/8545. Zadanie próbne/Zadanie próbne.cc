// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string temp;
    cin>>temp;
    for(int i=temp.size()-1;i>=0;i--){
        cout<<temp[i];
    }
}