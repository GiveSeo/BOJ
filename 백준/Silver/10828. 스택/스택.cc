// Example program
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int N;
    cin>>N;
    stack<int> arr;
    for(int i=0;i<N;i++){
        string temp;
        cin>>temp;
        if(temp=="push"){
            int temp_num;
            cin>>temp_num;
            arr.push(temp_num);
        }
        else if(temp=="pop"){
            if(arr.size()==0){
                cout<<"-1"<<"\n";
            }
            else{
                int temp_num=arr.top();
                cout<<temp_num<<"\n";
                arr.pop();
            }    
        }
        else if(temp=="size"){
            cout<<arr.size()<<"\n";
        }
        else if(temp=="empty"){
            cout<<arr.empty()<<"\n";
        }
        else if(temp=="top"){
            if(arr.size()==0){
                cout<<"-1"<<"\n";
            }
            else{
                int temp_num=arr.top();
                cout<<temp_num<<"\n";
            }   
        }
    }
}