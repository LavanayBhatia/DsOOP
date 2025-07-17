#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    int arr[x][y];

    for (int i = 0; i < x; i++)
        for (int j = 0; j < y; j++)
            cin >> arr[i][j];

    cout << "Original Matrix:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for (int i = 0; i < x; i++)
        for (int j = i + 1; j < y; j++)
            swap(arr[i][j], arr[j][i]);

    cout << "Transposed Matrix:\n";
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    return 0;
}
