// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N,M;
    cin>>N>>M;
    vector<int> temp;
    for(int i=0;i<N;i++){
        int temp_num;
        cin>>temp_num;
        temp.push_back(temp_num);
    }
    for(int i=0;i<temp.size();i++){
        if(temp[i]>=M){
            continue;
        }
        cout<<temp[i]<<" ";
    }
}