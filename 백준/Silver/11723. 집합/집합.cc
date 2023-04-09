// Example program
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    set<int> s;
    int N;
    cin>>N;
    string temp;
    int num;
    for(int i=0;i<N;i++){
        cin>>temp;
        if(temp=="add"){
            cin>>num;
            s.insert(num);
        }
        else if(temp=="remove"){
            cin>>num;
            if(s.find(num)!=s.end()){
                s.erase(num);
            }
        }
        else if(temp=="check"){
            cin>>num;
            if(s.find(num)!=s.end()){
                cout<<"1"<<"\n";
            }
            else{
                cout<<"0"<<"\n";
            }
        }
        else if(temp=="toggle"){
            int num;
            cin>>num;
            if(s.find(num)!=s.end()){
                s.erase(num);
            }
            else{
                s.insert(num);
            }            
        }
        else if(temp=="all"){
            s={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        }
        else if(temp=="empty"){
            set<int> temp;
            s=temp;
        }
    }
}