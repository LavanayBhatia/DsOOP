#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int arr[x][y], diagonal = 0;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
            if (i == j)
                diagonal += arr[i][j];
        }

    cout << "Matrix:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "Sum of Diagonal Elements: " << diagonal << endl;
    return 0;
}
