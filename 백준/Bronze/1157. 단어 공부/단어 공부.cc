#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    string temp;
    cin>>temp;
    int f[26]={0,};
    for(int i=0;i<temp.size();i++){
        int as=(int)temp[i]-65;
        if(as>=0&&as<=25){
        }
        else{
            as-=32;
        }
        f[as]++;
    }
    int max=-1;
    int index=-1;
    bool a=false;
    for(int i=0;i<26;i++){
        if(max<f[i]){
            max=f[i];
            index=i;
            a=false;
        }
        else if(max==f[i]){
            a=true;
        }
    }
    
    if(a){
        cout<<"?"<<endl;
    }
    else{
        char ans=(char)index+65;
        cout<<ans<<endl;   
    }
}
