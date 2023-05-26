// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int time;
    int drunk;
    cin>>time>>drunk;
    if(drunk==1){
        cout<<"280";
    }
    else if(time<12||time>16){
        cout<<"280";
    }
    else
        cout<<"320";
    
}