#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;

vector<vector<int>> arr;
vector<bool> BFS_visit;
vector<bool> DFS_visit;
queue<int> BFS_list;

void BFS(int n);
void DFS(int n);

int main()
{
    int N,M,V;
    cin>>N>>M>>V;
    arr.resize(N+1);
    BFS_visit=vector<bool>(N+1,false);DFS_visit=vector<bool>(N+1,false);
    for(int i=1;i<=M;i++){
        int a,b;
        cin>>a>>b;
        arr[a].push_back(b);arr[b].push_back(a);
    }
    for(int i=1;i<=N;i++)
        sort(arr[i].begin(),arr[i].end());   
    DFS(V);
    cout<<"\n";
    BFS(V);
}
void DFS(int n){
    if(DFS_visit[n]){return;}
    cout<<n<<" ";
    DFS_visit[n]=true;
    for(vector<int>::iterator iter=arr[n].begin();iter!=arr[n].end();iter++){
        DFS(*iter);
    }
}
void BFS(int n){
    if(BFS_visit[n]){return;}
    cout<<n<<" ";
    BFS_visit[n]=true;
    for(vector<int>::iterator iter=arr[n].begin();iter!=arr[n].end();iter++){
        BFS_list.push(*iter);
    }
    while(!BFS_list.empty()){
        int temp=BFS_list.front();
        BFS_list.pop();
        BFS(temp);
    }
}