// Example program
#include <iostream>
#include <string>
#include <queue>
#include <utility>
#include <algorithm>
using namespace std;
string board[26];
int vis[26][26];

int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>board[i];
    }
    vector<int> house_size;
    for(int i=0;i<n;i++){
        for(int k=0;k<n;k++){
            if(vis[i][k]==1||board[i][k]=='0')
                continue;
            int temp_size=0;
            queue<pair<int,int>> Q;
            Q.push({i,k});
            vis[i][k]=1;
            while(!Q.empty()){
                auto A = Q.front();
                Q.pop();
                temp_size++;
                vis[A.first][A.second];
                for(int l=0;l<4;l++){
                    int x = A.first+dx[l];
                    int y = A.second+dy[l];
                    if(x<0||y<0||x>=n||y>=n)
                        continue;
                    if(vis[x][y]==1||board[x][y]=='0')
                        continue;
                    Q.push({x,y});
                    vis[x][y]=1;
                }
            }
            house_size.push_back(temp_size);
        }    
    }
    sort(house_size.begin(),house_size.end());
    cout<<house_size.size()<<endl;
    for(int i=0;i<house_size.size();i++){
        cout<<house_size[i]<<"\n";
    }
}