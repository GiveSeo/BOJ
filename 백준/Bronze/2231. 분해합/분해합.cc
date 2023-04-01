// Example program
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int N;
    cin>>N;
    int temp=1;
    while(temp<=N){
        int hap=temp;
        int rank=temp;
        while(rank>0){
            hap+=rank%10;
            rank/=10;
        }
        if(hap==N){
            cout<<temp<<endl;
            return 0;
        }
        else{
            temp++;
        }
    }
    cout<<"0"<<endl;
}