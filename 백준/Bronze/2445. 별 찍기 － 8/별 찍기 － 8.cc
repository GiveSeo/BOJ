#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=1;i<num;i++){
        for(int k=1;k<=i;k++)
            cout<<"*";
        for(int l=1;l<=(num-i)*2;l++)
            cout<<" ";
        for(int m=1;m<=i;m++)
            cout<<"*";  
        cout<<"\n";
    }
    for(int i=1;i<=(num)*2;i++)
        cout<<"*";
    cout<<"\n";
        for(int i=(num-1);i>0;i--){
        for(int k=1;k<=i;k++)
            cout<<"*";
        for(int l=1;l<=(num-i)*2;l++)
            cout<<" ";
        for(int m=1;m<=i;m++)
            cout<<"*";  
        cout<<"\n";
    }
}