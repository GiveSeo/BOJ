// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    int N;
    cin>>N;
    int sum_Y=0;
    int sum_M=0;
    for(int i=0;i<N;i++){
        int time;
        cin>>time;
        sum_Y+=10*((time/30)+1);
        sum_M+=15*((time/60)+1);
    }
    if(sum_Y>sum_M){
        cout<<"M "<<sum_M;
    }
    else if(sum_Y<sum_M){
        cout<<"Y "<<sum_Y;
    }
    else{
        cout<<"Y M "<<sum_Y;
    }
}