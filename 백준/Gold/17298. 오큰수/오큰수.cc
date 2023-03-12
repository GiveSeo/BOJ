#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int main()
{
    int N;
    cin>>N;
    vector<int> arr(N,0);
    stack<int> s;
    vector<int> ans(N,0);
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    s.push(0);
    for(int i=1;i<N;i++){
        while((!s.empty())&&arr[s.top()]<arr[i]){
            ans[s.top()]=arr[i];
            s.pop();
        }
        s.push(i);
    }
    while(!s.empty()){
        ans[s.top()]=-1;
        s.pop();
    }
    for(int i=0;i<N;i++){
        cout<<ans[i]<<" ";
    }
}
