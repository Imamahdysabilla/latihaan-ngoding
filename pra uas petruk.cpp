// 2.Buat ADT Mahasiswa dengan member data nama (string) dan ipk (double)
// jawab = 
// struct Mahasiswa{
//     string nama;
//     double ipk;
    
// };

// 3.Buat ADT Mahasiswa dengan member data nama (string) dan ipk 
// jawab = 
// struct Mahasiswa {
//     string nama;
//     double ipk;
// };

// struct Node {
//     Mahasiswa mhs;
//     Node* next;
// };

// 4.Perhatikan definisi struct pada kode berikut:

// struct Node
// {
//     int data;
//     Node *next;
// };

// struct MyList
// {
//     Node *head;
//     void tambahBelakang(int);
//     void hapusDepan();
//     void hapusBelakang();
//     void hapus(int);
//     MyList()
//     {
//         head = new Node;
//         head = NULL;
//     }
//     bool isEmpty()
//     {
//         return head == NULL;
//     }
//     void tambahDepan(int databaru)
//     {
//         Node *baru;
//         baru = new Node;
//         baru->data = databaru;
//         baru->next = NULL;

//         if (isEmpty())
//         {
//             head = baru;
//         }
//         else
//         {
//             baru->next = head;
//             head = baru;
//         }
//     }

//     void cetak()
//     {
//         if (isEmpty())
//         {
//             cout << "List kosong";
//         }
//         else
//         {
//             Node *bantu;
//             bantu = head;
//             while (bantu != NULL)
//             {
//                 cout << bantu->data << endl;
//                 bantu = bantu->next;
//             }
//         }
//     }
// };
// Buat fungsi di  dengan nama tambahBelakang, untuk menambahkan data dari belakang. Anda dapat membuat fungsi anggota (member function) di luar definisi kelas dengan menggunakan operator lingkup (::) dan menyediakan definisi fungsi tanpa implementasi di dalam struct/class. Dengan demikian, kode untuk membuat fungsi tambahBelakang di luar struct MyList adalah:
// void MyList::tambahBelakang(int databaru){
//  	// statement fungsi
// }

// For example:

// Test	Result
//     MyList *list;
//     list = new MyList();
//     list->tambahDepan(5);
//     list->tambahDepan(20);
//     list->tambahDepan(10);
//     list->tambahBelakang(27);
//     list->cetak();
// 10
// 20
// 5
// 27
// jawab : 
// void MyList::tambahBelakang(int databaru){
//     Node *baru;
//     baru = new Node;
//     baru->data = databaru;
//     baru->next = NULL;
    
//     if (isEmpty()){
//         head = baru;
//     }else{
//         Node *bantu = head;
//         while (bantu->next != NULL){
//             bantu = bantu->next;
//         }
//         bantu->next = baru;
//     }    
// }


// 5.Perhatikan definisi struct pada kode berikut:

// struct Node
// {
//     int data;
//     Node *next;
// };

// struct MyList
// {
//     Node *head;
//     void tambahBelakang(int);
//     void hapusDepan();
//     void hapusBelakang();
//     void hapus(int);
//     MyList()
//     {
//         head = new Node;
//         head = NULL;
//     }
//     bool isEmpty()
//     {
//         return head == NULL;
//     }
//     void tambahDepan(int databaru)
//     {
//         Node *baru;
//         baru = new Node;
//         baru->data = databaru;
//         baru->next = NULL;

//         if (isEmpty())
//         {
//             head = baru;
//         }
//         else
//         {
//             baru->next = head;
//             head = baru;
//         }
//     }

//     void cetak()
//     {
//         if (isEmpty())
//         {
//             cout << "List kosong";
//         }
//         else
//         {
//             Node *bantu;
//             bantu = head;
//             while (bantu != NULL)
//             {
//                 cout << bantu->data << endl;
//                 bantu = bantu->next;
//             }
//         }
//     }
// };
// Buat fungsi di  dengan nama hapusDepan(), untuk menghapus data depan (head), cetak "List kosong" jika tidak ada data di dalam list. Anda dapat membuat fungsi anggota (member function) di luar definisi kelas dengan menggunakan operator lingkup (::) dan menyediakan definisi fungsi tanpa implementasi di dalam struct/class. Dengan demikian, kode untuk membuat fungsi tambahBelakang di luar struct MyList adalah:
// void MyList::hapusDepan(){
//  	// statement fungsi
// }
// Catatan:
// * Testcase pada soal ini mengasumsikan melanjutkan kode program pada soal sebelumnya, dimana fungsi tambahBelakang sudah dibuat dengan benar.
// For example:

// Test	Result
//     MyList *list;
//     list = new MyList();
//     list->tambahDepan(5);
//     list->tambahDepan(20);
//     list->tambahDepan(10);
//     list->tambahBelakang(27);
//     list->cetak();
// 10
// 20
// 5
// 27
//     MyList *l = new MyList();
//     l->tambahDepan(5);
//     l->tambahBelakang(20);
//     l->tambahDepan(15);
//     l->tambahDepan(1);
//     l->tambahDepan(2);
//     l->tambahDepan(3);
//     l->hapusDepan();
//     l->cetak();
// 2
// 1
// 15
// 5
// 20
// jawab : 
// void MyList::tambahBelakang(int databaru){
//     Node *baru;
//     baru = new Node;
//     baru->data = databaru;
//     baru->next = NULL;
    
//     if (isEmpty()){
//         head = baru;
//     }else{
//         Node *bantu = head;
//         while (bantu->next != NULL){
//             bantu = bantu->next;
//         }
//         bantu->next = baru;
//     }    
// }

// void MyList::hapusDepan(){
//     if(isEmpty()){
//         cout << "List kosong";
        
//     }else{
//         Node *hapus = head;
//         head = head ->next;
//         delete hapus;
//     }
// }


// 6.Buat fungsi dengan nama tukar, dengan 3 parameter bilangan bulat a, b, dan c. Fungsi ini akan mengubah nilai tiap parameter dengan cara menukar antara satu dengan lainnya sehingg a < b < c. 

// For example:

// Test	Input	Result
// int a=114,b=22,c=13;
//     tukar(a,b,c);
// cout<<a<<" "<<b<<" "<<c<<endl;
// int a=114,b=22,c=13;
//     tukar(a,b,c);
// cout<<a<<" "<<b<<" "<<c<<endl;
// 13 22 114
// jawab : 
// #include <iostream>
// using namespace std;

// void tukar(int&a, int&b, int&c){
//     if (a>= b){
//         int temp = a;
//         a = b;
//         b = temp;
//     }
//     if (b>=c){
//         int temp = b;
//         b = c;
//         c = temp;
//     }
//     if (a>=b){
//         int temp = a;
//         a = b;
//         b = temp;
//     }
// }


// 7.Liburan musim panas Tora akan dimulai besok, dan dia telah memutuskan untuk membuat rencana untuknya sekarang.

// Liburan ini terdiri dari N hari. Untuk setiap i (1 ≤ i ≤ N), Taro akan memilih salah satu dari tiga kegiatan berikut dan melakukannya pada hari ke-i:

// A: Berenang di laut. Poin kebahagiaan yang didapatkan: ai. 
// B: Menangkap serangga di pegunungan. Poin kebahagiaan yang didapatkan: bi. 
// C: Mengerjakan pekerjaan rumah di rumah. Poin kebahagiaan yang didapatkan: ci. 
// Karena Tora mudah bosan, dia tidak dapat melakukan kegiatan yang sama selama dua hari atau lebih berturut-turut.

// Temukan jumlah total poin kebahagiaan maksimum yang mungkin diperoleh oleh Tora.

// Batasan: 

// Semua nilai masukan adalah bilangan bulat. 
// 1 ≤ N ≤ 10^5 
// 1 ≤ ai, bi, ci ≤ 10^4
// Input: 

// Input diberikan melalui Standar Input dengan format berikut:

// N

// a1 b1 c1

// a2 b2 c2

// ... 

// aN bN cN

// Output: 

// Cetak jumlah total poin kebahagiaan maksimum yang mungkin diperoleh oleh Tora.


// For example:

// Test	Input	Result
// tc01
// 3
// 10 40 70
// 20 50 80
// 30 60 90
// 210
// jawab : 
// def max_happiness(N, activities):
//     dp = [[0] * 3 for _ in range(N)]
    
//     # Inisialisasi nilai awal
//     dp[0][0] = activities[0][0]  # Berenang di laut
//     dp[0][1] = activities[0][1]  # Menangkap serangga di pegunungan
//     dp[0][2] = activities[0][2]  # Mengerjakan pekerjaan rumah di rumah
    
//     # Iterasi untuk mencari nilai maksimum
//     for i in range(1, N):
//         # Berenang di laut
//         dp[i][0] = activities[i][0] + max(dp[i-1][1], dp[i-1][2])
        
//         # Menangkap serangga di pegunungan
//         dp[i][1] = activities[i][1] + max(dp[i-1][0], dp[i-1][2])
        
//         # Mengerjakan pekerjaan rumah di rumah
//         dp[i][2] = activities[i][2] + max(dp[i-1][0], dp[i-1][1])
    
//     # Mengembalikan nilai maksimum dari tiga kegiatan terakhir
//     return max(dp[N-1][0], dp[N-1][1], dp[N-1][2])

// # Membaca input dari user
// N = int(input())
// activities = []
// for _ in range(N):
//     a, b, c = map(int, input().split())
//     activities.append((a, b, c))

// # Memanggil fungsi max_happiness dan mencetak hasilnya
// print(max_happiness(N, activities))


// 8.Diberikan sebuah array terurut A dengan N elemen. Implementasikan algoritma Binary Search untuk mencari elemen X dalam array A dan menghitung berapa kali array ditelusuri hingga X ditemukan atau tidak ditemukan dalam A.

// Constraints

// Semua elemen dalam array A adalah bilangan bulat.
// Array A terurut dalam urutan non-menurun (ascending order).
// Jumlah elemen dalam array A tidak melebihi batas integer.
// X adalah sebuah bilangan bulat.
// Input Input diberikan dari Standar Input dalam format berikut:

// N
// A1 A2 ... AN
// X
// N adalah sebuah bilangan bulat (0 ≤ N ≤ 10^5) yang merupakan jumlah elemen dalam array A.
// A1, A2, ..., AN adalah N bilangan bulat yang merupakan elemen-elemen array A dalam urutan non-menurun.
// X adalah sebuah bilangan bulat yang akan dicari dalam array A.
// Output Cetak satu baris yang berisi indeks elemen X dalam array A jika X ditemukan, diikuti dengan spasi, kemudian jumlah iterasi yang dilakukan untuk menemukan atau mengetahui bahwa X tidak ada dalam array A.


// For example:

// Test	Input	Result
// tc01
// 20
// 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39
// 19
// 9 1
// tc06
// 20
// 1 3 5 7 9 11 13 15 17 19 21 23 25 27 29 31 33 35 37 39
// 20
// -1 4

// jawab : 
// #include <iostream>
// #include <vector>

// using namespace std;

// pair<int, int> binary_search(const vector<int>& arr, int target) {
//     int left = 0;
//     int right = arr.size() - 1;
//     int count = 0;

//     while (left <= right) {
//         int mid = left + (right - left) / 2;
//         count++;

//         if (arr[mid] == target) {
//             return make_pair(mid, count);
//         } else if (arr[mid] < target) {
//             left = mid + 1;
//         } else {
//             right = mid - 1;
//         }
//     }

//     return make_pair(-1, count);
// }

// int main() {
//     int N;
//     cin >> N;

//     vector<int> A(N);
//     for (int i = 0; i < N; i++) {
//         cin >> A[i];
//     }

//     int X;
//     cin >> X;

//     pair<int, int> result = binary_search(A, X);
//     cout << result.first << " " << result.second << endl;

//     return 0;
// }


