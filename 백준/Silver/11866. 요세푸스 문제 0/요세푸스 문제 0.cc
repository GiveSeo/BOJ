// Example program
#include <iostream>
#include <queue>

using namespace std;


int main(){
    queue<int> arr;
    int N,K;
    cin>>N>>K;
    for(int i=1;i<=N;i++){
        arr.push(i);
    }
    cout<<"<";
    while(arr.size()!=1){
        for(int i=1;i<K;i++){
            int temp=arr.front();
            arr.pop();
            arr.push(temp);
        }
        int temp=arr.front();
        arr.pop();
        cout<<temp<<", ";
    }
    int temp=arr.front();
    cout<<temp<<">";
}