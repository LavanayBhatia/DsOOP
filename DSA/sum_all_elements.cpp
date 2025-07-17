#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int arr[x][y], total = 0;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
            total += arr[i][j];
        }

    cout << "Matrix:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "Sum of All Elements: " << total << endl;
    return 0;
}
