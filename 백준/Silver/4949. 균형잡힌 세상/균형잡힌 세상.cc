#include <stack>
#include <iostream>

using namespace std;
int main(){
    string temp;
    getline(cin,temp);
    while(temp!="."){
        stack<char> arr;
        bool bal=true;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='('||temp[i]=='['){
                arr.push(temp[i]);
            }
            else if(temp[i]==')'){
                if(arr.size()!=0&&arr.top()=='('){
                    arr.pop();
                }
                else{
                    bal=false;
                    break;
                }
            }
            else if(temp[i]==']'){
                if(arr.size()!=0&&arr.top()=='['){
                    arr.pop();
                }
                else{
                    bal=false;
                    break;
                }
                
            }
        }
        if(!arr.empty()){
            bal=false;
        }
        if(bal){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
        getline(cin,temp);
    }
    
}