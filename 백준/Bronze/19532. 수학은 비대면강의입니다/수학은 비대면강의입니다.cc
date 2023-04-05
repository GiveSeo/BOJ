// Example program
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a,b,c;
    int d,e,f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    vector<int> ans;
    for(int i=-999;i<1000;i++){
        for(int k=-999;k<1000;k++){
            if((a*i+b*k==c)&&(d*i+e*k==f)){
                ans.push_back(i);ans.push_back(k);
            }
        }
    }
    cout<<ans[0]<<" "<<ans[1];
}