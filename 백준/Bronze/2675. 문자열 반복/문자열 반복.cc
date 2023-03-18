// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int temp_num;
        string temp_string;
        cin>>temp_num>>temp_string;
        for(int k=0;k<temp_string.size();k++){
            for(int l=0;l<temp_num;l++){
                cout<<temp_string[k];
            }
        }
        cout<<"\n";
    }
}