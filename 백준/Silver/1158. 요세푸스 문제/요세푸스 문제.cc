// Example program
#include <iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    int N,K;
    cin>>N>>K;
    queue<int> a;
    for(int i=1;i<=N;i++){
        a.push(i);
    }
    cout<<"<";
    while(a.size()>1){
        for(int i=1;i<K;i++){
            a.push(a.front());
            a.pop();
        }
        cout<<a.front()<<", ";
        a.pop();
    }
    cout<<a.front()<<">";
}