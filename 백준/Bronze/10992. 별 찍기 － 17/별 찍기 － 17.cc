#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=0;i<num-1;i++){
        for(int k=1;k<num-i;k++)
            cout<<" ";
        cout<<"*";
        for(int l=0;l<(i*2-1);l++)
                cout<<" ";
        if(i!=0)
            cout<<"*";
        cout<<"\n";
    }
    for(int i=1;i<=(num*2-1);i++)
        cout<<"*";
}