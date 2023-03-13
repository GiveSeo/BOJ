#include <vector>
#include <iostream>

using namespace std;
int count;
void DFS(int n);
bool arr[101][101]={false,};
bool visit[101]={false,};
int com_num;
int edge_num;
int main()
{
    cin>>com_num;
    cin>>edge_num;
    for(int i=0;i<edge_num;i++){
        int a,b;
        cin>>a>>b;
        arr[a][b]=true;
        arr[b][a]=true;
    }
    
    DFS(1);
    cout<<count-1<<endl;//맨 처음 감염된 pc는 제외
}

void DFS(int n){
    if(!visit[n]){
        visit[n]=true;
        count++;
    }
    else
        return;
    for(int i=1;i<=com_num;i++){
        if(arr[n][i]){
            DFS(i);
        }
    }
}