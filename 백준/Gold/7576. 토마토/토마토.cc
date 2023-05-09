// Example program
#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;

int board[1002][1002];
int dist[1002][1002];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main()
{
    queue<pair<int,int>> q;
    int n,m;
    cin>>m>>n;
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            cin>>board[i][k];
            if(board[i][k]==1){
                q.push({i,k});
                dist[i][k]=0;
            }
            if(board[i][k]==0)
                dist[i][k]=-1;
        }
    }
    while(!q.empty()){
        auto A = q.front();
        q.pop();
        for(int l=0;l<4;l++){
            int x = A.first+dx[l];
            int y = A.second+dy[l];
            if(x<0||y<0||x>=n||y>=m)
                continue;
            if(dist[x][y]>=0||board[x][y]==-1)
                continue;
            q.push({x,y});
            dist[x][y]=dist[A.first][A.second]+1;
        }
    }
    int max_num=0;
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            if(dist[i][k]==-1){
                cout<<"-1";
                return 0;
            }
            max_num=max(max_num,dist[i][k]);
        }
    }
    cout<<max_num;
}