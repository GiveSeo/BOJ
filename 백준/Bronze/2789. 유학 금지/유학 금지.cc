// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string temp;
    cin>>temp;
    for(int i=0;i<temp.size();i++){
        if(temp[i]=='C'||temp[i]=='A'||temp[i]=='M'||temp[i]=='B'||temp[i]=='R'||temp[i]=='I'||temp[i]=='D'||temp[i]=='G'||temp[i]=='E'){
        }
        else{
            cout<<temp[i];
        }
    }
}