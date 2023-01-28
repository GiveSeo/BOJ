#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    while(1){
        string temp;
        getline(cin,temp);
        if(temp=="")
            break;
        cout<<temp<<endl;
    }
}
