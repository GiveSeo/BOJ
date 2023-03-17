#include <iostream>
using namespace std;
int main(){
    int max=-1;
    int index;
    for(int i=1;i<10;i++){
        int temp;
        cin>>temp;
        if(temp>max){
            index=i;
            max=temp;
        }
    }
    cout<<max<<endl;
    cout<<index<<endl;
}
    