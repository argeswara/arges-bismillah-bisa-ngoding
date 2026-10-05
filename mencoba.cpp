#include <iostream>
using namespace std;

int main() {

    // Daftar film
    string film[3] = {
        "1. Avengers",
        "2. Spider-Man",
        "3. Inside Out"
    };

    // Status kursi
    // 0 = tersedia
    // 1 = sudah dipesan
    int kursi[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    int pilihanFilm;
    int pilihanKursi;

    // =========================
    // MEMILIH FILM
    // =========================
    cout << "==============================" << endl;
    cout << "       BIOSKOP SEDERHANA      " << endl;
    cout << "==============================" << endl;

    cout << "\nDaftar Film:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << film[i] << endl;
    }

    cout << "\nPilih film (1-3): ";
    cin >> pilihanFilm;

    // Mengecek pilihan film
    if (pilihanFilm < 1 || pilihanFilm > 3) {
        cout << "Pilihan film tidak tersedia." << endl;
        return 0;
    }

    // =========================
    // MEMILIH KURSI
    // =========================
    cout << "\nFilm yang dipilih: "
         << film[pilihanFilm - 1] << endl;

    cout << "\nDaftar Kursi:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Kursi " << i + 1;

        if (kursi[i] == 0) {
            cout << " [Tersedia]" << endl;
        } else {
            cout << " [Terisi]" << endl;
        }
    }

    cout << "\nPilih nomor kursi (1-10): ";
    cin >> pilihanKursi;

    // Mengecek nomor kursi
    if (pilihanKursi < 1 || pilihanKursi > 10) {
        cout << "Nomor kursi tidak tersedia." << endl;
        return 0;
    }

    // Mengecek apakah kursi sudah terisi
    if (kursi[pilihanKursi - 1] == 1) {
        cout << "Maaf, kursi tersebut sudah terisi." << endl;
        return 0;
    }

    // Mengubah status kursi menjadi terisi
    kursi[pilihanKursi - 1] = 1;

    // =========================
    // HASIL PEMESANAN
    // =========================
    cout << "\n==============================" << endl;
    cout << "       PEMESANAN BERHASIL     " << endl;
    cout << "==============================" << endl;

    cout << "Film  : " << film[pilihanFilm - 1] << endl;
    cout << "Kursi : " << pilihanKursi << endl;

    cout << "\nSelamat menonton!" << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main (){
    int a = 100, b = 5;

    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;

    // cout << pow(a, b) << endl;
    // cout << fmax(a, b) << endl;
    // cout << fmin(a, b) << endl;
    // cout << sqrt(a) << endl;

}


#include <iostream>
using namespace std;

int main(){

    int angka;
    angka = 321 % 100;
    angka = angka / 10;
    cout << angka << endl;
}

#include <iostream>
using namespace std;

int main (){

    bool hasil = 5 < 3;
    cout << hasil << endl;
    bool hasil2 = 5 > 3;
    cout << hasil2 << endl;
    bool hasil3 = 5 == 3;
    cout << hasil3 << endl;
    bool hasil4 = 5 != 3;
    cout << hasil4 << endl;

    bool vartrue = true;
    bool varfalse = false;
    cout << (vartrue && varfalse) << endl;
    cout << (vartrue || varfalse) << endl;
}

#include <iostream>
using namespace std;    

int main (){
    int x = 5, y = 6;
    if (x > y){
        cout << "x lebih besar dari y" << endl;
    } 
    else if (x < y) {
        cout << "x lebih kecil dari y" << endl;
    }
    else {
        cout << "x sama dengan y" << endl;
    }
}

#include <iostream>
using namespace std;

int main (){
    for (int i = 10; i >= 3; i--){
        for (int j = 10; j >= i ; j--){
            cout << j;
        }
        cout << endl;
    }
}
