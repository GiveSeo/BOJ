// Example program
#include <iostream>
#include <string>
#include <deque>
using namespace std;
int main()
{
    string temp="1";
    while(1){
        cin>>temp;
        if(temp=="0")
            return 0;
        int total=1;
        for(int i=0;i<temp.size();i++){
            if(temp[i]=='0'){
                total+=5;
            }
            else if(temp[i]=='1'){
                total+=3;
            }
            else{
                total+=4;
            }
        }
        cout<<total<<endl;
    }
}