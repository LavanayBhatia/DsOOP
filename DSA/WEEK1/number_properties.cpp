#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number : "<<endl;
    cin >>num;

    if(num%2!=0){
cout << "Odd"<<endl;
    }
    else if(num%2==0){
        cout <<"Even"<<endl;
    }
if(num>0){
    cout <<"+ve Number"<<endl;
}
else if(num<0){
    cout <<"-ve Number"<<endl;
}
else{
    cout <<"Zero";
}
int count=0;
while(num!=0){
count ++;
num/=10;
}
cout << count;

    return 0;
}
