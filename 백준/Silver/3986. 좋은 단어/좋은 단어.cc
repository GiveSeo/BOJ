// Example program
#include <iostream>
#include <string>
#include <deque>
#include <stack>
using namespace std;

int main()
{
    int n;
    int cnt=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string temp;
        cin>>temp;
        stack<char> s;
        for(auto c : temp){
            if(s.size()&&c==s.top())
                s.pop();
            else
                s.push(c);
        }
        if(s.empty())
            cnt++;
    }
    cout<<cnt;
}