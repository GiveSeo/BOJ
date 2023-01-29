#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int k=1;k<=num-i;k++){
            cout<<" ";
        }
        for(int l=1;l<=i;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}