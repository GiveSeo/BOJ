#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); cout.tie(NULL);   
    int num;
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int k=1;k<=i;k++)
            cout<<"*";
        cout<<"\n";
    }
}
