// Example program
#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;
int main()
{
    int N,K,M;
    cin>>N>>K>>M;
    deque<int> a;
    for(int i=1;i<=N;i++){
        a.push_back(i);
    }
    int killed=0;
    bool way=true;
    while(a.size()>1){
        if(way){
            for(int i=1;i<K;i++){
            a.push_back(a.front());
            a.pop_front();
        }
        cout<<a.front()<<"\n";
        a.pop_front();
        killed++;
            if(killed==M){
                killed=0;
                way=false;
            }
        }
        else{
        for(int i=1;i<K;i++){
            a.push_front(a.back());
            a.pop_back();
        }
        cout<<a.back()<<"\n";
        a.pop_back();
        killed++;
        if(killed==M){
            killed=0;
            way=true;
        }
        }
    }
    if(way){
        cout<<a.front();
    }
    else{
        cout<<a.back();
    }
}