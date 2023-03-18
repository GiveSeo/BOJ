// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string temp;
    getline(cin,temp);
    if(temp=="1 2 3 4 5 6 7 8"){
        cout<<"ascending";
    }
    else if(temp=="8 7 6 5 4 3 2 1"){
        cout<<"descending";
    }
    else{
        cout<<"mixed";
    }
}