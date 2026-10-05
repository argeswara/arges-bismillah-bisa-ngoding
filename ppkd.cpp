Pertemuan 2: Output, Variables, and Operations

#include <iostream>
using namespace std;

int main(){
    cout << "Hello world, " << "aku belajar c++" << "\n" << "aku bisa ngoding" ;
}

#include <iostream>
using namespace std;

int main (){
    cout << "Terdapat sebuah persegi panjang dengan : " << endl;

    int panjang = 10;
    int lebar = 5;
    int luas = panjang * lebar;

    cout << "panjang : " << panjang << endl;
    cout << "lebar : " << lebar << endl;
    cout << "Persegi panjang itu juga memiliki luas : " << luas << endl;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// string nama = Qwerty;
// int years = 18;
// double tall = 1.6;
int main (){
    string name = "Qwerty";
    int years = 18;
    double tall = 1.6;
    bool firstInitial = true;
    string firstInitialstring = "Q";

    cout << "Hi, my name is " << name << ", I am " << years << " years old, I am " << tall << " m tall, and my first initial is " << firstInitialstring << " and it is " << firstInitial << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main (){
    double temp_f = 100;
    double temp_c = (temp_f - 32) * 5 / 9;
    cout << "Temperature in Celsius: " << temp_c << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main(){

    int angka;
    cout << "masukkan tiga digit angka : ";
    cin >> angka;

    //mencentak angka ke dua dari bilangan tiga digit
    angka = angka % 100;
    angka = angka / 10;

    cout << "Angka kedua dari bilangan tiga digit: " << angka << endl;
}

#include <iostream>
using namespace std;

int main(){
    //deklarasi variabel
    double r = 7.2;
    double phi = 3.14;
    double h = 12;
    //1/3 = 0.3333333333333333

    //menghitung volume kerucut
    double volume = 0.3333333333333333 * phi * r * r * h;
    cout << "Volume kerucut tersebut adalah : " << volume << endl;
}


#include <iostream>
using namespace std;

int main (){
    int angka;
    cout << "Masukkan tiga digit angka : ";
    cin >> angka;

    //mencetak hudur depan dari 3 digit angka
    int angka1 = angka / 100;

    //mencetak angka ke dua dari 3 digit angka
    int angka2 = (angka % 100) / 10;

   //mencetak angka ke tiga dari 3 digit angka
    int angka3 = angka % 10;

    int angka4 = angka1 + angka2 + angka3;
    cout << "Hasil jumlah dari ketiga angka tersebut adalah : " << angka4 << endl;
}

Pertemuan 3, input, if else.

#include <iostream>
using namespace std;

int main (){

    //deklarasi variabel
    int dollar, rupiah;
    int nilaiTukar = 17845;
    
    //input dari user
    cout << "Masukkan nilai dollar : ";
    cin >> dollar;

    //proses konversi
    rupiah = dollar * nilaiTukar;

    //output hasil konversi
    cout << "Hasil konversi : " << rupiah << " rupiah" << endl;

}

#include <iostream>
using namespace std;

int main (){

    //deklarasi variable
    int tinggi, lebar, luas;

    //Input nilai tinggi dan lebar
    cout << "Masukkan nilai tinggi: ";
    cin >> tinggi;
    cout << "Masukkan nilai lebar: ";
    cin >> lebar;

    //Proses menghitung luas segitiga siku-siku
    luas = (tinggi * lebar) / 2;

    //Output hasil perhitungan
    cout << "Luas segitiga siku-siku tersebut adalah : " << luas << endl;
}

#include <iostream>
using namespace std;

int main (){

    //deklarasi variabel
    int password = 1234;

    //masukkan password
    int input;
    cout << "Masukkan password : ";
    cin >> input;

    //cek password
    if (input == password){
        cout << "Password benar" << endl;
    }
    else {
        cout << "Password salah" << endl;
    }
}

#include <iostream>
using namespace std;

int main (){
    //deklarasi variabel
    int angka;
    cout << "Masukkan angka : ";
    cin >> angka;

    //cek apakah angka tersebut genap atau ganjil
    if (angka % 2 == 0){
        cout << "Angka tersebut adalah bilangan genap" << endl;
    }
    else {
        cout << "Angka tersebut adalah bilangan ganjil" << endl;
    }
}

#include <iostream>
using namespace std;

int main(){

    //deklarasi variabel
    int jam;
    cout << "Masukkan jam : ";
    cin >> jam;

    //cek apakah jam tersebut masuk ke dalam kategori pagi, siang, sore, atau malam
    if (jam <= 6){
        cout << "Dini Hari" << endl;
    }
    else if (jam <= 11)
    {
        cout << "Selamat Pagi" << endl;
    }
    else if (jam <= 17){
        cout << "Selamat Siang" << endl;
    }
    else if (jam <= 18){
        cout << "Selamat Sore" << endl;
    }
    else {
        cout << "Selamat Malam" << endl;   
    }
    
}

#include <iostream>
using namespace std;

int main(){

    //deklarasi variabel
    int nilai;
    cout << "Masukkan nilai : ";
    cin >> nilai;

    //cek apakah nilai tersebut masuk ke dalam kategori A, B, C, D, atau E
    if (nilai >= 90){
        cout << "Nilai anda adalah A" << endl;
    }
    else if (nilai >= 80){
        cout << "Nilai anda adalah B" << endl;
    }
    else if (nilai >= 70){
        cout << "Nilai anda adalah C" << endl;
    }
    else if (nilai >= 60){
        cout << "Nilai anda adalah D" << endl;
    }
    else {
        cout << "Nilai anda adalah E" << endl;
    }
}

#include <iostream>
using namespace std;

int main (){
    //data member
    string nama;
    int memberId;
    bool isMember;
    char jawab;
    double diskon;

    //data buku
    int bukuid[5]= {1, 2, 3, 4, 5};
    string judul[5] = {"Harry Potter", "The Lord of the Rings", "To Kill a Mockingbird", "1984", "Pride and Prejudice"};
    double harga[5] = {150000, 200000, 100000, 120000, 80000};

    //variable pembayaran
    double cash;
    double kembalian;

    //tampilan awal
    cout << "==============================" << endl;
    cout << "   Welcome to the Bookstore   " << endl;
    cout << "==============================" << endl;

    //member 
    cout << "Apakah anda member? (y/n) : ";
    cin >> jawab;
    
    if (jawab == 'y' || jawab == 'Y'){
        cout << "Masukkan ID member : ";
        cin >> memberId;

        if (memberId == 1) nama = "Ani";
        else if (memberId == 2) nama = "Budi";
        else if (memberId == 3) nama = "Citra";
        else nama = "Guest";

        diskon = 0.15;
        cout << "Selamat datang, " << nama << "!" << endl;
    }
    else {
        nama = "Guest";
        diskon = 0.05;
        cout << "Selamat datang, " << nama << "!" << endl;
    }

    //memilih buku
    cout << "==============================" << endl;
    cout << "     Daftar Buku Tersedia     " << endl;
    cout << "==============================" << endl;

    for (int i = 0; i < 5; i++){
        cout << bukuid[i] << ". " << judul[i] << " - Rp " << harga[i] << endl;
    }

    cout << "==============================" << endl;
    cout << "Silahkan memilih buku (1-5) : ";
    int pilihanBuku;
    cin >> pilihanBuku;

    if (pilihanBuku < 1 || pilihanBuku > 5){
        cout << "Pilihan buku tidak tersedia." << endl;
    }
    else {
        cout << nama << " memilih buku: " << judul[pilihanBuku - 1] << " - Rp " << harga[pilihanBuku - 1] << endl;
    }

    //total pembayaran
    double totalHarga = harga[pilihanBuku - 1];
    double totalDiskon = totalHarga * diskon;
    double totalBayar = totalHarga - totalDiskon;
    cout << "Total bayar setelah diskon member: Rp " << totalBayar << endl;

    cout << nama << " memilih buku: " << judul[pilihanBuku - 1] << " - Rp " << totalBayar << endl;

    cout << "==============================";

    //proses pembayaran
    cout << "\nSilahkan masukkan nominal biaya : ";
    cin >> cash;

    while (cash < totalBayar){
        cout << "Nominal tidak cukup";
        cout << "\nSilahkan masukkan nominal biaya : ";
        cin >> cash;
    }

    kembalian = cash - totalBayar;
    cout << "total uang : " << "Rp." << cash << "\n" << "Kemabalian : " << kembalian;
    cout << "\nTerimakasih sudah berkunjung...";
}

#include <iostream>
using namespace std;

int main (){
   
    string namaHari;
    int hariKe;

    cout << "Sekarang hari apa ? " ;
    cin >> hariKe;

        switch (hariKe){
        case 1:
            namaHari = "Senin";
            break;
        case 2:
            namaHari = "Selasa";
            break;
        case 3:
            namaHari = "Rabu";
            break;
        case 4:
            namaHari = "Kamis";
            break;
        case 5:
            namaHari = "Jumat";
            break;
        case 6:
            namaHari = "Sabtu";
            break;
        case 7:
            namaHari = "Minggu";
            break;
        }

    cout << "Hari ini adalah hari " << namaHari << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main (){
   for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= i ; j++){
            cout << j ;
        }
        cout << endl;
   }
   
}

#include <iostream>
using namespace std;

int main (){
   for (int i = 1; i <= 10; i++){
        for (int j = 1; j <= 10 ; j++){
            if ( j = 10 - i){
                cout << " " ;
            }
            else {
                cout << j ;
            }
        }
        cout << endl;
   }
   
}

#include <iostream>
using namespace std;

int main (){

    int angka1;
    cout << "Masukkan angka : " ;
    cin >> angka1;

    int angka2;
    cout << "Masukkan angka : " ;
    cin >> angka2;

    for (int i = angka1; i <= angka2; i++){
        cout << i << " " ;
    }
}

#include <iostream>
using namespace std;

int main (){

    int angka1;
    cout << "Masukkan angka : " ;
    cin >> angka1;

    int angka2;
    cout << "Masukkan angka : " ;
    cin >> angka2;

    for (int i = angka1; i <= angka2; i++){
        if ( i % 2 == 0){
            cout << i << " " ;
        }
    }
}

#include <iostream>
using namespace std;

int main (){

    int angka1;
    cout << "Masukkan angka : " ;
    cin >> angka1;

    int angka2;
    cout << "Masukkan angka : " ;
    cin >> angka2;

    int sum = 0;

    for (int i = angka1 + 1; i < angka2; i++){
        if ( i % 2 == 0){
            sum += i;
        }
    }
    cout << sum << " " ;
}
