// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int total=0;
    int min_num=100;
    for(int i=0;i<7;i++){
        int temp;
        cin>>temp;
        if(temp%2==1){
            total+=temp;
            min_num=min(temp,min_num);
        }
    }
    if(total==0){
        cout<<"-1";
    }
    else{
        cout<<total<<endl;
        cout<<min_num<<endl;
    }
}