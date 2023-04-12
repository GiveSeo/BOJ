#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<int> num;
    for(int i=0;i<3;i++){
        int temp;
        cin>>temp;
        num.push_back(temp);
    }
    sort(num.begin(),num.end());
    for(int e : num){
        cout<<e<<" ";
    }
}