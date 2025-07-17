
#include <iostream>
using namespace std;

int main(){
    int x=5,k=0;
    int num;
    char grade;
cout <<"Enter Subject Marks (5 Subjects) : "<<endl;
    while(x--){
cin >>num;
k+=num;
    }
    int avg =k/5;
    if(avg>=90 && avg<=100){grade='A';
    }
    else if(avg>=80&&avg<=89){
        grade='B';
    }
    else if(avg>=70 && avg <=79){
        grade='C';
    }
    else if(avg>=60 && avg <=69){
        grade='D';
    }
    else if(avg<60){
        grade='F';
    }
    cout << "Total : "<<k<<endl<<"Average : "<<avg<<endl<<"Grade : "<<grade;
    return 0;
}
