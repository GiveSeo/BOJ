#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    vector<int> arr;
    vector<int> s;
    
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++){
        int temp_num;
        cin>>temp_num;
        arr.push_back(temp_num);
        if(i==0)
            s.push_back(temp_num);
        else
            s.push_back(temp_num+s[i-1]);
    }
    
    for(int i=0;i<M;i++){
        int to,from;
        cin>>to>>from;
        to-=1;
        from-=1;
        if(to==0)
            cout<<s[from]<<"\n";
        else
            cout<<s[from]-s[to-1]<<"\n";
    }
    
    return 0;
}
