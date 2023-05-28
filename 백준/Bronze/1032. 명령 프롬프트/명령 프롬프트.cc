// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name_list[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>name_list[i];
    }
    bool same[50];
    for(int i=0;i<name_list[0].size();i++){
        bool temp=true;
        char ch=name_list[0][i];
        for(int j=0;j<n;j++){
            if(ch!=name_list[j][i])
                temp=false;
        }
        if(temp==false){
            same[i]=false;
        }
        else{
            same[i]=true;
        }
    }
    for(int i=0;i<name_list[0].size();i++){
        if(same[i])
            cout<<name_list[0][i];
        else
            cout<<"?";
    }
}