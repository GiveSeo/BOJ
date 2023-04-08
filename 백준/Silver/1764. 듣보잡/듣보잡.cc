// Example program
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    map<string,int> m;
    int N,M;
    cin>>N>>M;
    vector<string> ans;
    for(int i=0;i<N+M;i++){
        string temp;
        cin>>temp;
        m[temp]++;
        if(m[temp]>1){
            ans.push_back(temp);
        }
    }
    sort(ans.begin(),ans.end());
    cout<<ans.size()<<"\n";
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<"\n";
    }
}