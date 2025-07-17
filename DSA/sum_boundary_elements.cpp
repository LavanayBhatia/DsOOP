#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int arr[x][y], boundary = 0;

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++) {
            cin >> arr[i][j];
            if (i == 0 || j == 0 || i == x - 1 || j == y - 1)
                boundary += arr[i][j];
        }

    cout << "Matrix:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    cout << "Sum of Boundary Elements: " << boundary << endl;
    return 0;
}
