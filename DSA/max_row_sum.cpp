#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int arr[x][y], maxSum = 0;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> arr[i][j];

    for (int i = 0; i < x; i++) {
        int rowSum = 0;
        for (int j = 0; j < y; j++)
            rowSum += arr[i][j];
        if (rowSum > maxSum)
            maxSum = rowSum;
    }

    cout << "Matrix:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "Max Sum of Row Elements: " << maxSum << endl;
    return 0;
}
