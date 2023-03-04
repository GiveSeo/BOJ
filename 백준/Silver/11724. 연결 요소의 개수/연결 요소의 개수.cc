#include <vector>
#include <iostream>

using namespace std;
void BFS(int n);
vector<vector<int>> a;
vector<bool> visited;
int count=0;
int main()
{
    int N,M;
    cin>>N>>M;
    a.resize(N+1);
    visited=vector<bool>(N+1,false);
    for(int i=0;i<M;i++){
        int u,v;
        cin>>u>>v;
        a[u].push_back(v);
        a[v].push_back(u);
    }
    for(int i=1;i<=N;i++){
        if(!visited[i]){
            BFS(i);
            count++;
        }
    }
    cout<<count;
}

void BFS(int n){//BFS 함수
    if(visited[n]){return;}//방문한 노드일 시, 탐색 하지 않음
    visited[n]=true;
    for(vector<int>::iterator iter=a[n].begin();iter<a[n].end();iter++){
        if(visited[*iter]==false){
            BFS(*iter);
        }
    }
}
