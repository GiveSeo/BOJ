#include <algorithm>
#include <iostream>
#include <deque>
#include <cstring>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    deque<int> ar;
    int count;
    cin>>count;
    for(int i=0;i<count;i++){
        string temp;
        int temp_num;
        cin>>temp;
        if(temp=="push_front"){
            cin>>temp_num;
            ar.push_front(temp_num);
        }
        else if(temp=="push_back"){
            cin>>temp_num;
            ar.push_back(temp_num);
        }
        else if(temp=="pop_front"){
            if(ar.size()==0){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<ar.front()<<"\n";
                ar.pop_front();
            }
        }
        else if(temp=="pop_back"){
            if(ar.size()==0){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<ar.back()<<"\n";
                ar.pop_back();
            }
        }
        else if(temp=="size"){
            cout<<ar.size()<<"\n";
        }
        else if(temp=="empty"){
            if(ar.size()==0)
                cout<<"1"<<"\n";
            else
                cout<<"0"<<"\n";
        }
        else if(temp=="front"){
            if(ar.size()==0){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<ar.front()<<"\n";
            }
        }
        else if(temp=="back"){
            if(ar.size()==0){
                cout<<"-1"<<"\n";
            }
            else{
                cout<<ar.back()<<"\n";
            }
        }
    }
}
