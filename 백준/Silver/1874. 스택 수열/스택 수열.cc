// Example program
#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>


using namespace std;

int main()
{
    stack<int> s;
    vector<char> ans;
    int N;
    cin>>N;
    vector<int> a(N,0);
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int num=1;
    for(int i=0;i<N;i++){
        if(num<=a[i]){        
            while(num<=a[i]){
                s.push(num);
                ans.push_back('+');
                num++;
            }
        }
        if(s.empty()){
            cout<<"NO";
            return 0;
            }
        if(s.top()==a[i]){
            ans.push_back('-');
            s.pop();
        }
        else{
            cout<<"NO";
            return 0;
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}