#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string temp;
    getline(cin,temp);
    bool dan=false;
    int count=0;
    for(int i=0;i<temp.size();i++){
        if(temp[i]!=' '){
            dan=true;
        }
        if(temp[i]==' '){
            if(dan){
                count++;
                dan=false;
            }
        }
    }
    if(dan){count++;}
    cout<<count;
}
