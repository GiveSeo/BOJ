#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    stack<char> arr;
    int stack_num=0;
    string temp;
    cin>>temp;
    int ans=0;
    for(int i=0;i<temp.size();i++){
        if(temp[i]=='('){
            stack_num++;
        }
        else if(temp[i]==')'){
            if(temp[i-1]=='('){
            stack_num--;
            ans+=stack_num;                
            }
            else{
                ans++;
                stack_num--;
            }
        }
    }
    cout<<ans<<endl;
}