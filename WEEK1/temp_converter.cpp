#include <iostream>
using namespace std;

int main(){
 float x;
 cin >>x;

 cout << "Choose : \n1. Celsius To Fahrenheit\n2. Fahrenheit To Celsius\n3. Celius To Kelvin\n4. Kelvin To Celsius\n5. Fahrenheit To Kelvin\n6.Kelvin To Fahrenheit\n";
  int z;
 cin >>z;
 if(z==1){
cout << 9.0/5.0*x+32;
 }
 else if(z==2){
cout << (x - 32) * 5.0/9.0;
 }
 else if(z==3){
cout << x+273.15;
 }
  else if(z==4){
cout << x-273.15;
 }
  else if(z==5){
cout << ((x - 32)) * 5.0/9.0 + 273.15;
 }
  else if(z==6){
cout << ((x - 273.15)) * 9.0/5.0 + 32;
 }
 else{
    cout << "Choose Between 1-6";
 }
    return 0;
}
