#include <iostream>
using namespace std;

int main() {
    int nums[5];
    cout << "Enter 5 numbers: ";
    for (int j = 0; j < 5; j++) {
        cin >> nums[j];
    }

    int total = 0;
    for (int j = 0; j < 5; j++) {
        total += nums[j];
    }

    float average = total / 5.0;
    cout << "Sum : " << total << endl;
    cout << "Average : " << average;
    return 0;
}
