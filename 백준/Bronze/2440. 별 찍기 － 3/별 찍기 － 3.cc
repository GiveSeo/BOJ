#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=num;i>0;i--){
        for(int k=0;k<i;k++)
            cout<<"*";
        cout<<endl;
    }
}