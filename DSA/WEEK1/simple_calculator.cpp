include <iostream>

using namespace std;

int main(){
    int fnum,Snum;

    cin >>fnum>>Snum;
    string op;
    cin >> op;
    if(op=="+"){
        cout <<fnum+Snum;
    }
    else if(op=="-"){
        cout <<fnum-Snum;
    }
    else if(op=="*"){
        cout << fnum*Snum;
    }
    else if(op=="/"){
        cout <<fnum/Snum;
    }
    return 0;
}
