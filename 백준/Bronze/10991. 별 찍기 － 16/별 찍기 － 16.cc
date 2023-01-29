#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int l=1;l<=num-i;l++)
            cout<<" ";
        for(int k=1;k<=i;k++)
            cout<<"* ";
        cout<<"\n";
    }
}