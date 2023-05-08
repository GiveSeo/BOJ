// Example program
#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <queue>

using namespace std;
#define X first
#define Y second

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int board[501][501];
int vis[501][501];


int main()
{
    int count=0;
    int max_num=0;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            cin>>board[i][k];
        }
    }
    for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            if(vis[i][k]==1||board[i][k]==0)
                continue;
            queue<pair<int,int>> Q;
            Q.push({i,k});
            vis[i][k]=1;
            int p_size=0;
            while(!Q.empty()){
                auto a = Q.front();
                Q.pop();
                p_size++;
                vis[a.X][a.Y]=1;
                for(int l=0;l<4;l++){
                    int x=a.X+dx[l];
                    int y=a.Y+dy[l];
                    if(vis[x][y]==1||board[x][y]==0)
                        continue;
                    if(x<0||y<0||x>=n||y>=m)
                        continue;
                    Q.push({x,y});
                    vis[x][y]=1;
                }
            }
            count++;
            max_num=max(max_num,p_size);
            p_size=0;
        }
    }
    cout<<count<<" "<<max_num;
}