// Example program
#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
  stack<char> left;
  stack<char>right;
  int N;
  string temp;
  cin>>temp;
  cin>>N;
  for(int i=0;i<temp.size();i++){
      left.push(temp[i]);
      }
    for(int i=0;i<N;i++){
        char order;
        cin>>order;
        if(order=='D'){
            if(right.size()){
                left.push(right.top());
                right.pop();
            }
        }
        else if(order=='L'){
            if(left.size()){
                right.push(left.top());
                left.pop();
            }
        }
        else if(order=='B'){
            if(left.size()){
                left.pop();
            }
        }        
        else if(order=='P'){
            char plus;
            cin>>plus;
            left.push(plus);
        }
    }
    while(left.size()){
        right.push(left.top());
        left.pop();        
    }
    while(right.size()){
        cout<<right.top();
        right.pop();        
    }
}