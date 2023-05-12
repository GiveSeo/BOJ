#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        if(temp.size()>=6&&temp.size()<=9){
            cout<<"yes";
        }
        else{
            cout<<"no";
        }
        cout<<"\n";
    }
}
