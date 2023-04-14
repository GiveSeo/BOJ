// Example program
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int num1,num2;
        cin>>num1>>num2;
        cout<<num1+num2<<"\n";
    }
}