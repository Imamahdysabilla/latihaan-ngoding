#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // mencetak elements array
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // menggandakan elements array 2
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }

    // cetak array lagi
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // get user meng input dan print
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    cout << "You entered: " << input << endl;

    return 0;
}
