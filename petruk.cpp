#include <iostream>
#include <cstring>

using namespace std;

class String {
    private:
        char *str;
    public:
        String() {
            str = nullptr;
        }

        String(char *s) {
            str = new char[strlen(s) + 1];
            strcpy(str, s);
        }

        ~String() {
            if (str != nullptr) {
                delete [] str;
            }
        }

        void display() {
            cout << str << endl;
        }

        char* getStr() {
            return str;
        }
};

void displayArray(char **arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5;
    char *names[SIZE];
    for (int i = 0; i < SIZE; i++) {
        names[i] = new char[20];
        cout << "Enter name " << i + 1 << ": ";
        cin >> names[i];
    }

    displayArray(names, SIZE);

    String *strArr[SIZE];
    for (int i = 0; i < SIZE; i++) {
        strArr[i] = new String(names[i]);
    }

    for (int i = 0; i < SIZE; i++) {
        strArr[i]->display();
    }

    for (int i = 0; i < SIZE; i++) {
        delete strArr[i];
        delete [] names[i];
    }

    return 0;
}