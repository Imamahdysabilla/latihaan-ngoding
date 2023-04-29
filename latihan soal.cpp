// #include <iostream>
// #include <cstring>

// using namespace std;

// char* balik(char* str) {
//     int len = strlen(str);
//     char* revStr = new char[len+1];
//     for (int i = 0; i < len; i++) {
//         revStr[i] = str[len-i-1];
//     }
//     revStr[len] = '\0';
//     return revStr;
// }

// int main() {
//     char str[] = "Pemrograman Terstruktur";
//     cout << balik(str) << endl;
//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// // fungsi untuk membalikkan urutan kata dalam sebuah kalimat
// char* balikKalimat(char* kalimat) {
//     // reverse urutan huruf setiap kata
//     char* token = strtok(kalimat, " ");
//     while (token != NULL) {
//         int len = strlen(token);
//         for (int i = 0; i < len/2; i++) {
//             char temp = token[i];
//             token[i] = token[len-i-1];
//             token[len-i-1] = temp;
//         }
//         token = strtok(NULL, " ");
//     }

//     // reverse urutan kata dalam kalimat
//     int len = strlen(kalimat);
//     for (int i = 0; i < len/2; i++) {
//         char temp = kalimat[i];
//         kalimat[i] = kalimat[len-i-1];
//         kalimat[len-i-1] = temp;
//     }

//     // kembalikan pointer ke kalimat hasil pembalikan
//     return kalimat;
// }

// int main() {
//     // string yang akan dibalikkan
//     char kalimat[] = "coba dibalik";

//     // panggil fungsi balikKalimat dan tampilkan hasilnya
//     cout << balikKalimat(kalimat) << endl;

//     // akhiri program dengan status berhasil
//     return 0;
// }

// #include <iostream>

// using namespace std;

// void swap(int arr[], int a, int b, int n) {
//     if (a < 0 || b < 0 || a >= n || b >= n) {
//         // cek apakah nilai a atau b valid
//         cout << "Error: a dan b harus bernilai antara 0 dan " << n-1 << endl;
//         return;
//     }
//     int temp = arr[a];  // simpan nilai arr[a] pada variabel temp
//     arr[a] = arr[b];    // isi arr[a] dengan nilai arr[b]
//     arr[b] = temp;      // isi arr[b] dengan nilai temp
// }

// int main() {
//     int myArray[] = {10, 20, 30, 40, 50};
//     int n = sizeof(myArray)/sizeof(myArray[0]);
//     cout << "Sebelum ditukar: ";
//     for (int i = 0; i < n; i++) {
//         cout << myArray[i] << " ";
//     }
//     cout << endl;
//     swap(myArray, 1, 3, n);
//     cout << "Setelah ditukar: ";
//     for (int i = 0; i < n; i++) {
//         cout << myArray[i] << " ";
//     }
//     cout << endl;
//     return 0;
// }

// #include <iostream>
// #include <cstring>

// using namespace std;

// int main() {
//     const int MAX_LENGTH = 20;
//     int n;
//     cout << "Masukkan jumlah string: ";
//     cin >> n;

//     char stringArr[n][MAX_LENGTH+1];

//     // Menerima input c-string dari user
//     for (int i = 0; i < n; i++) {
//         cout << "Masukkan string ke-" << i+1 << ": ";
//         cin >> stringArr[i];
//     }

//     // Menampilkan c-string beserta panjangnya
//     for (int i = 0; i < n; i++) {
//         cout << stringArr[i] << " " << strlen(stringArr[i]) << endl;
//     }

//     return 0;
// }

// #include <iostream>

// using namespace std;

// void sum(int *arr, int size) {
//     int total = 0;

//     for (int i = 0; i < size; i++) {
//         total += *(arr + i);
//     }

//     cout << "Hasil penjumlahan: " << total << endl;
// }

// #include <iostream>

// using namespace std;

// int main() {
//     int m, n;
//     cout << "Masukkan jumlah baris matriks: ";
//     cin >> m;
//     cout << "Masukkan jumlah kolom matriks: ";
//     cin >> n;

//     int matrix[m][n];

//     // Menerima input matriks dari user
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "Masukkan nilai matriks pada baris " << i+1 << " kolom " << j+1 << ": ";
//             cin >> matrix[i][j];
//         }
//     }

//     // Menampilkan matriks sebelum di transpose
//     cout << "Matriks sebelum di transpose:" << endl;
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // Menghitung transpose dari matriks
//     int transpose[n][m];
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             transpose[i][j] = matrix[j][i];
//         }
//     }

//     // Menampilkan matriks setelah di transpose
//     cout << "Matriks setelah di transpose:" << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cout << transpose[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
