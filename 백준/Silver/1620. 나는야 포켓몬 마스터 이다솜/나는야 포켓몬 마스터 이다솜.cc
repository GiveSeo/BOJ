// Example program
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <utility>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int N,M;
    cin>>N>>M;
    map<string,int> dic_index;
    vector<string> dic_name(N);
    for(int i=0;i<N;i++){
        string temp;
        cin>>temp;
        dic_index.insert(make_pair(temp,i));
        dic_name[i]=temp;
    }
    for(int i=0;i<M;i++){
        string temp;
        cin>>temp;
        if(isdigit(temp[0])){
            cout<<dic_name[stoi(temp)-1]<<"\n";
        }
        else{
            auto it=dic_index.find(temp);
            cout<<it->second+1<<"\n";
        }
    }
}