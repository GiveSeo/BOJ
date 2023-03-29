#include <iostream>
#include <string>
#include <stack>

using namespace std;
int main()
{
    stack<double> arr;
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        double temp;
        cin>>temp;
        if(!temp){
            arr.pop();
        }
        else{
            arr.push(temp);
        }
    }
    
    double ans=0;
    while(arr.size()){
        double temp=arr.top();
        arr.pop();
        ans+=temp;
    }
    cout<<ans;
    
}