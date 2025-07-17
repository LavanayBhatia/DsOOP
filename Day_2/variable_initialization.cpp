#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter first number (copy initialization): ";
    cin >> x;

    int y(x);
    int z{x};

    int w;
    cout << "Enter second number (default initialization): ";
    cin >> w;

    cout << "Values are:\n";
    cout << "x = " << x << "\n";
    cout << "y = " << y << "\n";
    cout << "z = " << z << "\n";
    cout << "w = " << w << "\n";

    return 0;
}
