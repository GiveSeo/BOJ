// Example program
#include <iostream>
#include <string>
#include <queue>
#include <utility>
using namespace std;
string board[102];
int dis[102][102];
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    queue<pair<int,int>> Q;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>board[i];
        fill(dis[i],dis[i]+m,-1);
    }
    Q.push({0,0});
    dis[0][0]=0;
    while(!Q.empty()){
        auto cur = Q.front();Q.pop();
        for(int i=0;i<4;i++){
            int nx=cur.first+dx[i];
            int ny=cur.second+dy[i];
            if(nx<0||ny<0||nx>=n||ny>=m)
                continue;
            if(board[nx][ny]!='1'||dis[nx][ny]!=-1)  
                continue;
            dis[nx][ny]=dis[cur.first][cur.second]+1;
            Q.push({nx,ny});
        }
    }
    cout<<dis[n-1][m-1]+1;
}