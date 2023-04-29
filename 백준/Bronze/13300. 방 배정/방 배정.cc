#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int cap,num;
    int temp_sex,temp_grade;
    int stu[6][2]={0,};
    cin>>num>>cap;
    for(int i=0;i<num;i++){
        cin>>temp_sex>>temp_grade;
        stu[temp_grade-1][temp_sex]++;
    }
    int count=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<6;j++){
            if(stu[j][i]%cap==0){
                count+=(stu[j][i]/cap);
            }
            else{
                count+=((stu[j][i]/cap)+1);
            }
        }
    }
    cout<<count<<endl;
}