#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    string temp;
    int N;
    cin>>N;
    int answer=0;
    cin>>temp;
    for(int i=0;i<N;i++){
        answer+=(((int)temp[i]-96)*pow(31,i));
        answer%=1234567891;//a = 97
    }
    cout<<answer<<endl;
}