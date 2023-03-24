// Example program
#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<vector<int>> arr;
vector<bool> visited;
vector<int> shortest;
void BFS(int n);
int main()
{
    int N,M,K,X;
    cin>>N>>M>>K>>X;
    arr.resize(N+1);
    shortest.resize(N+1,-1);
    visited.resize(N+1,false);
    for(int i=0;i<M;i++){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);
    }
    BFS(X);
    
    bool count=false;
    for(int i=1;i<=N;i++){
        if(K==shortest[i]){
            cout<<i<<"\n";
            count=true;
        }
    }
    if(!count){
        cout<<"-1"<<"\n";
    }
}

void BFS(int n){
    queue<int> list;
    list.push(n);
    visited[n]=true;
    shortest[n]=0;
    while(!list.empty()){
        int num=list.front();
        list.pop();
        for(vector<int>::iterator iter = arr[num].begin();iter!=arr[num].end();iter++){
            if(!visited[*iter]){
                visited[*iter]=true;
                shortest[*iter]=shortest[num]+1;
                list.push(*iter);
            }
        }
    }
    
}