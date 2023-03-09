#include <vector>
#include <iostream>
using namespace std;
vector<vector<int>> a;
vector<bool> visited;
bool ans=false;
void DFS(int n, int dep);

int main(){
    int N,M;
    cin>>N>>M;
    a.resize(N+1);visited=vector<bool>(N+1,false);
    for(int i=0;i<M;i++){
        int s,v;
        cin>>s>>v;
        a[s].push_back(v);a[v].push_back(s);
    }
    for(int i=0;i<N;i++){
        DFS(i,1);
        if(ans){break;}
    }
    if(ans){cout<<"1";}
    else{cout<<"0";}
}
void DFS(int n, int dep){
    if(dep==5||ans){
        ans=true;
        return;
    }
    visited[n]=true;
    for(vector<int>::iterator iter=a[n].begin();iter!=a[n].end();iter++){
        if(!visited[*iter]){
            DFS(*iter,dep+1);
        }
    }
    visited[n]=false;
}