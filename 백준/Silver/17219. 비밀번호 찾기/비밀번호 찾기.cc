// Example program
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <utility>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    map<string,string> m;
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        string temp1,temp2;
        cin>>temp1>>temp2;
        m[temp1]=temp2;
    }
    for(int i=0;i<M;i++){
        string temp1;
        cin>>temp1;
        cout<<m[temp1]<<"\n";
    }
}