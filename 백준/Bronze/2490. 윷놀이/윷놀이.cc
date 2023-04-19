// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    for(int i=0;i<3;i++){
        int count_0=0;
        int count_1=0;
        for(int k=0;k<4;k++){
            int temp;
            cin>>temp;
            if(temp==0){count_0++;}
            else{count_1++;}
        }
        if(count_0==1){
            cout<<"A"<<"\n";
        }
        else if(count_0==2){
            cout<<"B"<<"\n";
        }
        else if(count_0==3){
            cout<<"C"<<"\n";
        }
        else if(count_0==4){
            cout<<"D"<<"\n";
        }
        else{
            cout<<"E"<<"\n";
        }
    }
}