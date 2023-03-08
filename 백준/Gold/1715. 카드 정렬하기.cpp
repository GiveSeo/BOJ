#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int N;cin>>N;
    int sum=0;
    for(int i=0;i<N;i++){
        int temp;
        cin>>temp;
        pq.push(temp);
    }
    while(pq.size()!=1){
        int a,b;
        a=pq.top();pq.pop();b=pq.top();pq.pop();pq.push(a+b);
        sum+=(a+b);
    }
    cout<<sum;
}
