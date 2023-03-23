// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    int test_num;
    cin>>test_num;
    for(int i=0;i<test_num;i++){
        int H,W,N;
        cin>>H>>W>>N;
        int we=1;
        while(N>H){
            N-=H;
            we++;
        }
        int he=N;
        cout<<he;
        if(we<10){
            cout<<"0"<<we<<endl;
        }
        else{
            cout<<we<<endl;
        }
    }
}