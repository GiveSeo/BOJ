#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int month;
    int day;
    int total=0;
    cin>>month>>day;
    for(int i=1;i<=month;i++){//월, 일에 따라 총 일수 구하기
        if(i==month){
            total+=day;
        }
        else if(i==1|i==3|i==5|i==7|i==8|i==10|i==12)//1, 3, 5, 7, 8, 10, 12 월은 31일
            total+=31;
        else if(i==4|i==6|i==9|i==11)//4, 6, 9, 11 월은 30일
            total+=30;
        else if(i==2)//2월은 28일
            total+=28;
        else
            total+=0;
    }
    
    if(total%7==1)//총일수를 7로 나눈 나머지에 따라 요일 판단
        cout<<"MON";
    else if(total%7==2)
        cout<<"TUE";
    else if(total%7==3)
        cout<<"WED";
    else if(total%7==4)
        cout<<"THU";
    else if(total%7==5)
        cout<<"FRI";
    else if(total%7==6)
        cout<<"SAT";
    else if(total%7==0)
        cout<<"SUN";
}