#include<iostream>
#include<cstring>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print array elements
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Multiply array elements by 2
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }

    // Print array elements again
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Get user input and print it
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);
    cout << "You entered: " << input << endl;

    return 0;
}
