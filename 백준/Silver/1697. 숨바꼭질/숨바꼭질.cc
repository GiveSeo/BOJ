// Example program
#include <iostream>
#include <string>
#include <algorithm>
#include <utility>
#include <queue>
using namespace std;
int ti[100001];
int vis[100001];
int main(){
    queue<pair<int,int>> q;
    int n,k;
    cin>>n>>k;
    q.push({n,0});
    while(q.size()&&vis[k]==0){
        auto a = q.front();
        q.pop();
        if(a.first-1>=0&&vis[a.first-1]==0){
            vis[a.first-1]=1;
            ti[a.first-1]=a.second+1;
            q.push({a.first-1,a.second+1});
        }
        if(a.first+1<=100000&&vis[a.first+1]==0){
            vis[a.first+1]=1;
            ti[a.first+1]=a.second+1;
            q.push({a.first+1,a.second+1});
        }
        if(a.first*2<=100000&&vis[a.first*2]==0){
            vis[a.first*2]=1;
            ti[a.first*2]=a.second+1;
            q.push({a.first*2,a.second+1});
        }
    }
    if(n==k){
        cout<<"0";
    }
    else{
        cout<<ti[k];
    }
}