// #include <iostream>
// using namespace std;

// int main() {
    
//     int luas_kandang = 12;
//     int total_bulan = 0;
//     int total_luas_kandang = luas_kandang;

//     while (total_bulan < 10){
//         luas_kandang += 7;
//         total_luas_kandang += luas_kandang;
//         total_bulan += 1;
//     }
//     cout << "Total luas kandang setelah 10 bulan adalah " << total_luas_kandang ;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int luas_kandang = 12;
//     int total_kandang = 1;
//     int total_luas_kandang = luas_kandang;

//     while (total_luas_kandang < 800){
//         luas_kandang += 7;
//         total_luas_kandang += luas_kandang;
//         total_kandang += 1;
//     }
//     cout << total_kandang ;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int jantan = 0, betina = 0;
//     int tanggal = 1;

//     while ( betina <= 10 * jantan){
//         jantan += 1;
//         betina += tanggal;
//         tanggal += 1;
//     }
//     cout << tanggal;
// }

// #include <iostream>
// using namespace std;

// int main (){
//    char huruf;
//    cout << "Masukkan huruf : ";
//    cin >> huruf ;

//    if ( 'a' == huruf || 'A' == huruf ){
//     cout << huruf << " huruf vokal" ;
//    }
//    else if ( 'i' == huruf || 'I' == huruf){
//     cout << huruf << " huruf vokal";
//    }
//    else if ( 'u' == huruf || 'U' == huruf){
//     cout << huruf << " huruf vokal";
//    }
//    else if ( 'e' == huruf || 'E' == huruf){
//     cout << huruf << " huruf vokal";
//    }
//    else if ( 'o' == huruf || 'O' == huruf){
//     cout << huruf << " huruf vokal";
//    }
//    else {
//     cout << huruf << " churuf konsonan";
//    }
   
// }

// #include <iostream>
// using namespace std;

// int main() {
//     char huruf;
    
//     cout << "Masukkan satu huruf: ";
//     cin >> huruf;
    
//     if (huruf == 'a' || huruf == 'A') {
//         cout << huruf << " adalah huruf vokal." << endl;
//     } 
//     else if (huruf == 'i' || huruf == 'I') {
//         cout << huruf << " adalah huruf vokal." << endl;
//     } 
//     else if (huruf == 'u' || huruf == 'U') {
//         cout << huruf << " adalah huruf vokal." << endl;
//     } 
//     else if (huruf == 'e' || huruf == 'E') {
//         cout << huruf << " adalah huruf vokal." << endl;
//     } 
//     else if (huruf == 'o' || huruf == 'O') {
//         cout << huruf << " adalah huruf vokal." << endl;
//     } 
//     // Jika tidak ada satu pun yang cocok dari 5 syarat di atas
//     else {
//         cout << huruf << " adalah huruf konsonan." << endl;
//     }
    
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//   int data[6] = {5,8,5,9,9,7}; //ubah jadi niu kalian

//   int n = 5;

//   for(int i=1; i<n-1; i++){

//     for(int k=i+1; k<n;k++){

//        if(data[i] > data[k]){

//             int temp = data[i];

//             data[i] = data[k];

//             data[k] = temp;

//         }

//       }

//   }

//   for(int a=0; a<6; a++){cout << (data[a]);}

//      return 0; 

// }

//activity 1, kamis, 24-september-2026
// #include <iostream>
// using namespace std;

// double circleArea(double r){
//         return 3.14159 * r * r;
//     }
    
// double cylinderVolume(double r, double h){
//         return circleArea(r) * h;
//     }
    
// double coneVolume(double r, double h){
//         return cylinderVolume (r, h) / 3.0;
//     }

// int main() {
    
//     double radius = 10.0;
//     double height = 30.0;
//     cout << "Circle area = " << circleArea(radius) << endl;
//     cout << "Cylinder volume = " << cylinderVolume(radius, height) << endl;
//     cout << "Cone volume = " << coneVolume(radius, height) << endl;

//     return 0;
// }

//activity 2, kamis, 24-september-2026
// #include <iostream>
// using namespace std;

// int fact(int n) {
//     int jawaban = 1;

//     for (int i = 1; i <= n; i++) {
//         jawaban = jawaban * i;
//     }

//     return jawaban;
// }

// int main (){
//    int jawaban = fact(5) + fact(4);
//    cout << "Jawabanya adalah " << jawaban;
// }


//activity 3, kamis, 24-september-2026
// #include <iostream>
// #include <string>
// using namespace std;

// void tanggal(int tanggal, int bulan, int tahun){
//    string bulans[] = {"Januari", "Februari", "Maret", "April", "Mei", "Juni", "Juli", "Agustus", "September", "Oktober", "November", "Desember"};
//    cout << tanggal << " " << bulans[bulan - 1] << " " << tahun;
// }

// int main (){
//    tanggal(15, 10, 2023);
//    return 0;
// }


//activity 4, kamis, 24-september-2026
// #include <iostream>
// using namespace std;


// int fact(int n) {
//     if (n <= 1) {
//         return 1;
//     }

//     return n * fact(n - 1);
// }

// int main() {
//     int result = fact(5) + fact(4);

//     cout << "The result is " << result << endl;
// }

//recursion
// #include <iostream>
// using namespace std;

// int sum(int number){
//    if (number < 0){
//       cout << number << "\t";
//       return number + sum(number - 1);
//    }
//    else {
//       return 0;
//    }
// }
// int main(){
//    sum (5);
// }

// #include <iostream>
// using namespace std;

// void sayHello(){
//       cout << "Hello, good morning" << endl;
// }

// int main (){
//    sayHello();
//    sayHello();
//    sayHello();
// }

// #include <iostream>
// using namespace std;

// void sayHello(string name, int number=7){
//       cout << "Hello, good morning " << name << endl;
//       cout << "You have selected number " << number << endl;
// }

// int main (){
//    sayHello("Ani", 5);
//    sayHello("Budi", 10);
//    sayHello("Caca", 3);
// }

// #include <iostream>
// using namespace std;

// int rectangleArea(int width, int length){
//       return width * length;
// }

// int main(){
//    int rect = rectangleArea(5, 4);
//    cout << rect;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// void tampilanFilm(){
//    cout << "\n================================" << endl;
//    cout << "Daftar Film yang Tersedia" << endl;
//    cout << "================================" << endl;
//    cout << "1. Film A" << endl;
//    cout << "2. Film B" << endl;
//    cout << "3. Film C" << endl;
// }

// void tampilanKursi(char kursi[5][6]) {
//     cout << "\n=====================================\n";
//     cout << "             LAYAR\n";
//     cout << "=====================================\n\n";

//     cout << "     1  2  3  4  5  6\n";

//     for (int i = 0; i < 5; i++) {
//         cout << char('A' + i) << "    ";

//         for (int j = 0; j < 6; j++) {
//             cout << kursi[i][j] << "  ";
//         }

//         cout << endl;
//     }

//     cout << "\nO = Kursi tersedia\n";
//     cout << "X = Kursi sudah dipesan\n";
// }

// int cariBaris(char baris) {
//     return baris - 'A';
// }

// int main (){

//    // ============================== // DATA FILM // ==============================
  
//    string film;
//    int tampilanFilm;

//    // ============================== // DATA KURSI // =============================

//    char kursi[5][6] = {
//        {'O', 'O', 'O', 'O', 'O', 'O'},
//        {'O', 'O', 'O', 'O', 'O', 'O'},
//        {'O', 'O', 'O', 'O', 'O', 'O'},
//        {'O', 'O', 'O', 'O', 'O', 'O'},
//        {'O', 'O', 'O', 'O', 'O', 'O'}
//    };

//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 6; j++) {
//            kursi[i][j] = 'O';
//        }
//    }
   
// }

// #include <iostream>
// #include <string>
// using namespace std;

// // Fungsi untuk menampilkan daftar film
// void tampilkanFilm() {
//     cout << "\n=====================================\n";
//     cout << "        DAFTAR FILM BIOSKOP\n";
//     cout << "=====================================\n";
//     cout << "1. Avatar: The Way of Water\n";
//     cout << "2. Spider-Man: No Way Home\n";
//     cout << "3. Interstellar\n";
//     cout << "=====================================\n";
// }

// // Fungsi untuk menampilkan denah kursi
// void tampilkanKursi(char kursi[5][6]) {
//     cout << "\n=====================================\n";
//     cout << "             LAYAR\n";
//     cout << "=====================================\n\n";

//     cout << "     1  2  3  4  5  6\n";

//     for (int i = 0; i < 5; i++) {
//         cout << char('A' + i) << "    ";

//         for (int j = 0; j < 6; j++) {
//             cout << kursi[i][j] << "  ";
//         }

//         cout << endl;
//     }

//     cout << "\nO = Kursi tersedia\n";
//     cout << "X = Kursi sudah dipesan\n";
// }

// // Fungsi untuk mengubah pilihan kursi menjadi posisi array
// int cariBaris(char baris) {
//     return baris - 'A';
// }

// int main() {

//     // ==============================
//     // DATA FILM
//     // ==============================

//     string film;
//     int pilihanFilm;
//     int hargaTiket = 50000;

//     // ==============================
//     // DATA KURSI
//     // ==============================

//     char kursi[5][6];

//     // Semua kursi awalnya tersedia
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 6; j++) {
//             kursi[i][j] = 'O';
//         }
//     }

//     // Beberapa kursi sudah terisi
//     kursi[0][1] = 'X'; // A2
//     kursi[1][3] = 'X'; // B4
//     kursi[2][2] = 'X'; // C3
//     kursi[3][4] = 'X'; // D5

//     // ==============================
//     // PILIH FILM
//     // ==============================

//     cout << "=====================================\n";
//     cout << "       SISTEM PEMESANAN BIOSKOP\n";
//     cout << "=====================================\n";

//     tampilkanFilm();

//     cout << "Pilih film (1-3): ";
//     cin >> pilihanFilm;

//     switch (pilihanFilm) {
//         case 1:
//             film = "Avatar: The Way of Water";
//             break;

//         case 2:
//             film = "Spider-Man: No Way Home";
//             break;

//         case 3:
//             film = "Interstellar";
//             break;

//         default:
//             cout << "Pilihan film tidak tersedia.\n";
//             return 0;
//     }

//     // ==============================
//     // JUMLAH TIKET
//     // ==============================

//     int jumlahTiket;

//     cout << "\nFilm yang dipilih: " << film << endl;

//     cout << "Masukkan jumlah tiket: ";
//     cin >> jumlahTiket;

//     if (jumlahTiket <= 0 || jumlahTiket > 10) {
//         cout << "Jumlah tiket tidak valid.\n";
//         return 0;
//     }

//     // ==============================
//     // PILIH KURSI
//     // ==============================

//     char pilihanBaris;
//     int pilihanKolom;

//     // Menyimpan kursi yang dipilih
//     string kursiDipilih[10];

//     for (int i = 0; i < jumlahTiket; i++) {

//         tampilkanKursi(kursi);

//         cout << "\nTiket ke-" << i + 1 << endl;

//         cout << "Masukkan baris kursi (A-E): ";
//         cin >> pilihanBaris;

//         cout << "Masukkan nomor kursi (1-6): ";
//         cin >> pilihanKolom;

//         // Mengubah huruf menjadi huruf kapital
//         if (pilihanBaris >= 'a' && pilihanBaris <= 'e') {
//             pilihanBaris = pilihanBaris - 32;
//         }

//         // Validasi baris
//         if (pilihanBaris < 'A' || pilihanBaris > 'E') {
//             cout << "Baris kursi tidak valid!\n";
//             i--;
//             continue;
//         }

//         // Validasi nomor kursi
//         if (pilihanKolom < 1 || pilihanKolom > 6) {
//             cout << "Nomor kursi tidak valid!\n";
//             i--;
//             continue;
//         }

//         // Mengubah posisi menjadi array
//         int baris = cariBaris(pilihanBaris);
//         int kolom = pilihanKolom - 1;

//         // Mengecek apakah kursi sudah dipesan
//         if (kursi[baris][kolom] == 'X') {
//             cout << "Kursi tersebut sudah dipesan!\n";
//             cout << "Silakan pilih kursi lain.\n";

//             i--;
//             continue;
//         }

//         // Tandai kursi sebagai sudah dipesan
//         kursi[baris][kolom] = 'X';

//         // Simpan kursi yang dipilih
//         kursiDipilih[i] = string(1, pilihanBaris) + to_string(pilihanKolom);

//         cout << "Kursi " << kursiDipilih[i] << " berhasil dipilih!\n";
//     }

//     // ==============================
//     // HITUNG TOTAL HARGA
//     // ==============================

//     int totalHarga = jumlahTiket * hargaTiket;

//     // ==============================
//     // CETAK STRUK PEMESANAN
//     // ==============================

//     cout << "\n\n=====================================\n";
//     cout << "          PEMESANAN BERHASIL\n";
//     cout << "=====================================\n";

//     cout << "Film       : " << film << endl;
//     cout << "Harga      : Rp" << hargaTiket << endl;
//     cout << "Jumlah     : " << jumlahTiket << " tiket" << endl;

//     cout << "Kursi      : ";

//     for (int i = 0; i < jumlahTiket; i++) {
//         cout << kursiDipilih[i];

//         if (i < jumlahTiket - 1) {
//             cout << ", ";
//         }
//     }

//     cout << endl;
//     cout << "Total      : Rp" << totalHarga << endl;

//     cout << "=====================================\n";
//     cout << "       TERIMA KASIH\n";
//     cout << "=====================================\n";

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     // Daftar film
//     string film[3] = {
//         "1. A",
//         "2. B",
//         "3. C"
//     };

//     int kursi[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

//     int pilihanFilm;
//     int pilihanKursi;

//     cout << "==============================" << endl;
//     cout << "       BIOSKOP SEDERHANA      " << endl;
//     cout << "==============================" << endl;

//     cout << "\nDaftar Film:" << endl;

//     for (int i = 0; i < 3; i++) {
//         cout << film[i] << endl;
//     }

//     cout << "\nPilih film (1-3): ";
//     cin >> pilihanFilm;

//     if (pilihanFilm < 1 || pilihanFilm > 3) {
//         cout << "Pilihan film tidak tersedia." << endl;
//         return 0;
//     }

//     cout << "\nFilm yang dipilih: "
//          << film[pilihanFilm - 1] << endl;

//     cout << "\nDaftar Kursi:" << endl;

//     for (int i = 0; i < 10; i++) {
//         cout << "Kursi " << i + 1;

//         if (kursi[i] == 0) {
//             cout << " [Tersedia]" << endl;
//         } else {
//             cout << " [Terisi]" << endl;
//         }
//     }

//     cout << "\nPilih nomor kursi (1-10): ";
//     cin >> pilihanKursi;

//     if (pilihanKursi < 1 || pilihanKursi > 10) {
//         cout << "Nomor kursi tidak tersedia." << endl;
//         return 0;
//     }

//     if (kursi[pilihanKursi - 1] == 1) {
//         cout << "Maaf, kursi tersebut sudah terisi." << endl;
//         return 0;
//     }

//     kursi[pilihanKursi - 1] = 1;

//     cout << "\n==============================" << endl;
//     cout << "       PEMESANAN BERHASIL     " << endl;
//     cout << "==============================" << endl;

//     cout << "Film  : " << film[pilihanFilm - 1] << endl;
//     cout << "Kursi : " << pilihanKursi << endl;

//     cout << "\nSelamat menonton!" << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// int main (){
//     int A = 9 * 8;
//     int B = 6 * 5;
//     int C = 3 * 3;

//     string terbesar, terkecil;

//     if (A > B && A > C){
//         terbesar = "A";

//         if ()
//     }
//     }
// }

//senin, 28 - september - 2026
// #include <iostream>
// using namespace std;

// int main (){
    
//     for (int i = 1; i <= 4; i++){
//         for (int j = 1; j <= i; j++){
//             if (j % 2 == 0){
//                 cout << "*" ;
//                 break;
//             }
//         }
//     }
// }

// #include <iostream>
// using namespace std;

// int main (){

//     int N = 10;

//     for (int i = 1; i <= N; i++){
//         for (int j = 1; j <= i; j++){
//             cout << "*";
//         }
//         for (int k = i; k <= N - 1; k++){
//             cout << ".";
//         }

//         cout << endl ;
//     }

// }

// #include <iostream>
// using namespace std;

// int main (){

//     int N = 10;

//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= N; j++) {
//             if (i == 1 || i == N || j == 1 || j == N) {
//                 cout << "*";
//             } else {    
//                 cout << ".";
//             }
//         }
//         cout << endl;
//     }
// }

// int main (){

//     int N = 10;

//     for (int i = 1; i <= N; i++) {
//         for (int j = 1; j <= N; j++) {
//             if (j = N - i + 1) {
//                 cout << "*";
//             } else {    
//                 cout << ".";
//             }
//         }
//         cout << endl;
//     }
// }

// #include <iostream>
// using namespace std;

// int main (){

//     for (int i = 1; i <= 4; i++) {
//     if (i % 2 == 0) {
//         cout << "genap " << i << endl;
//         continue;
//     }
//     for (int j = 1; j <= i; j++) {
//         if ((i + j) % 2 == 0) {
//             cout << "*";
//         }
//     }
// }
// // int n = 47;
// // while (true) {
// //     if (n == 0) {
// //         break;
// //     }
// //     cout << "*";
// //     n = n / 10;
// // }
// }

//PPKD Pertemuan 7, 1 - oktober - 2026
//Qiuz 1, Fibonanci
// #include <iostream>
// using namespace std;

// int fibonacci(int n){
//     if (n == 0){
//         return 0;
//     }
//     else if (n == 1){
//         return 1;
//     }
//     else {
//         return fibonacci(n - 1) + fibonacci(n - 2);
//     }
// }

// int main (){
//     int jumlah;

//     cout << "Masukan angka: ";
//     cin >> jumlah;

//     cout << "Deret Fibonacci: ";
//     for (int i = 0; i < jumlah; i++){
//         cout << fibonacci(i) << " ";

//         if (i < jumlah - 1){
//             cout << ", ";
//         }
//     }
//     cout << endl;

//     return 0;

// }

//Quiz 2, Decimal & binary converter with function
// #include <iostream>
// using namespace std;

// void desimalkebiner(int desimal){

//     int biner[32];
//     int i = 0;

//     if (desimal == 0){
//         cout << "bilangan biner: 0" << endl;
//     }

//     while (desimal > 0){
//         biner[i] = desimal % 2;
//         desimal /= 2;
//         i++;
//     }

//     cout << "bilangan biner: ";
//      for (int j = i - 1; j >= 0; j--) {
//         cout << biner[j];
//     }

//     cout << endl;
// }

// void binerkedesimal(int biner){
    
//     int desimal = 0;
//     int pangkat = 1;

//     while (biner > 0){
//         int angka = biner % 10;
//         desimal = desimal + angka * pangkat;
//         biner = biner / 10;
//         pangkat = pangkat * 2;
//     }
//     cout << "bilangan desimal: " << desimal << endl;
// }

// int main (){
//     int pilihan, angka;

//     cout << "Pilih konversi: " << endl;
//     cout << "1. Desimal ke Biner" << endl;
//     cout << "2. Biner ke Desimal" << endl;
//     cout << "Masukan pilihan (1/2): ";
//     cin >> pilihan;

//     if (pilihan == 1){
//         cout << "Masukan bilangan desimal: ";
//         cin >> angka;
//         desimalkebiner(angka);
//     }
//     else if (pilihan == 2){
//         cout << "Masukan bilangan biner: ";
//         cin >> angka;
//         binerkedesimal(angka);
//     }
//     else {
//         cout << "Pilihan tidak valid." << endl;
//     }

//     return 0;
// }