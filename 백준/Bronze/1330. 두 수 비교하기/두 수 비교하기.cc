#include <utility>
#include <iostream>

using namespace std;

int main()
{
    int temp1,temp2;
    cin>>temp1>>temp2;
    if(temp1>temp2)
        cout<<">"<<endl;
    else if(temp1==temp2)
        cout<<"=="<<endl;
    else
        cout<<"<"<<endl;

    return 0;
}