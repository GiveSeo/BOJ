// Example program
#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr(10,0);
    string temp;
    cin>>temp;
    for(int i=0;i<temp.size();i++){
        if(temp[i]=='1'){arr[1]++;}
        else if(temp[i]=='2'){arr[2]++;}
        else if(temp[i]=='3'){arr[3]++;}
        else if(temp[i]=='4'){arr[4]++;}
        else if(temp[i]=='5'){arr[5]++;}
        else if(temp[i]=='6'){arr[6]++;}
        else if(temp[i]=='7'){arr[7]++;}
        else if(temp[i]=='8'){arr[8]++;}
        else if(temp[i]=='9'){arr[6]++;}
        else if(temp[i]=='0'){arr[0]++;}
    }
    if(arr[6]%2!=0){
        arr[6]=arr[6]/2;
        arr[6]++;
    }
    else{arr[6]=arr[6]/2;}
    int ans=0;
    for(int i=0;i<9;i++){
        ans=max(arr[i],ans);
    }
    cout<<ans<<endl;
}