// Example program
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n;
    queue<int> arr;
    cin>>n;
    for(int i=0;i<n;i++){
        string order;
        cin>>order;
        if(order=="push"){
            int temp;
            cin>>temp;
            arr.push(temp);
        }
        else if(order=="pop"){
            if(arr.size()){
                cout<<arr.front()<<"\n";
                arr.pop();
            }
            else{
                cout<<"-1"<<"\n";
            }
        }
        else if(order=="size"){
            cout<<arr.size()<<"\n";
        }
        else if(order=="empty"){
            cout<<arr.empty()<<"\n";
        }
        else if(order=="front"){
            if(arr.size()){
                cout<<arr.front()<<"\n";
            }
            else{
                cout<<"-1"<<"\n";
            }
        }
        else if(order=="back"){
            if(arr.size()){
                cout<<arr.back()<<"\n";
            }
            else{
                cout<<"-1"<<"\n";
            }
        }
    }
    
}