// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    while(1){
        string temp;
        cin>>temp;
        if(temp=="0"){
            break;
        }
        bool palin=true;
        int i=0;int k=temp.size()-1;
        while(i<k){
            if(temp[i]!=temp[k]){
                cout<<"no"<<"\n";
                palin=false;
                break;
            }
            i++;
            k--;
        }
        if(palin){
            cout<<"yes"<<"\n";
        }
        palin=true;
    }
}