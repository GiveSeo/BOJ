#include <iostream>

using namespace std;

int main()
{
    bool mo[42]={false, };
    for(int i=0;i<10;i++){
        int temp;
        cin>>temp;
        mo[temp%42]=true;
    }
    int count=0;
    for(int i=0;i<42;i++){
        if(mo[i]){
            count++;
        }
    }
    cout<<count;
}
