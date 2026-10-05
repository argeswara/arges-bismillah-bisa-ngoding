#include <iostream>
using namespace std;

// Function untuk menampilkan kursi
void tampilkanKursi(char kursi[3][4]) {

    cout << "\n===== DENAH KURSI =====" << endl;

    for (int i = 0; i < 3; i++) {

        cout << "Baris " << i + 1 << ": ";

        for (int j = 0; j < 4; j++) {
            cout << kursi[i][j] << " ";
        }

        cout << endl;
    }

    cout << "O = Kosong" << endl;
    cout << "X = Sudah dipesan" << endl;
}

int main() {

    // =========================
    // DATA FILM
    // =========================

    string film[3] = {
        "Avengers",
        "Interstellar",
        "Spiderman"
    };

    int harga[3] = {
        40000,
        45000,
        35000
    };

    // =========================
    // DATA KURSI
    // =========================

    // 3 baris dan 4 kursi
    char kursi[3][4];

    // Semua kursi awalnya kosong
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {
            kursi[i][j] = 'O';
        }
    }

    // =========================
    // MENAMPILKAN DAFTAR FILM
    // =========================

    cout << "============================" << endl;
    cout << "       BIOSKOP SEDERHANA    " << endl;
    cout << "============================" << endl;

    cout << "\nDaftar Film:" << endl;

    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". "
             << film[i]
             << " - Rp" << harga[i]
             << endl;
    }

    // =========================
    // MEMILIH FILM
    // =========================

    int pilihanFilm;

    cout << "\nPilih film (1-3): ";
    cin >> pilihanFilm;

    // Mengubah pilihan menjadi index array
    int indexFilm = pilihanFilm - 1;

    cout << "\nAnda memilih: " << film[indexFilm] << endl;
    cout << "Harga tiket: Rp" << harga[indexFilm] << endl;

    // =========================
    // PEMILIHAN KURSI
    // =========================

    int jumlahKursi;
    int totalHarga = 0;

    cout << "\nBerapa kursi yang ingin dipesan? ";
    cin >> jumlahKursi;

    for (int i = 0; i < jumlahKursi; i++) {

        // Tampilkan kondisi kursi
        tampilkanKursi(kursi);

        int baris;
        int nomorKursi;

        cout << "\nPilih baris (1-3): ";
        cin >> baris;

        cout << "Pilih nomor kursi (1-4): ";
        cin >> nomorKursi;

        // Mengubah input menjadi index array
        int b = baris - 1;
        int k = nomorKursi - 1;

        // Mengecek apakah kursi masih kosong
        if (kursi[b][k] == 'O') {

            // Mengubah kursi menjadi X
            kursi[b][k] = 'X';

            // Menambahkan harga tiket
            totalHarga += harga[indexFilm];

            cout << "Kursi berhasil dipesan!" << endl;

        } else {

            // Jika kursi sudah X
            cout << "Kursi tersebut sudah dipesan!" << endl;

            // Agar jumlah kursi yang berhasil dipilih tetap sesuai
            i--;
        }
    }

    // =========================
    // MENAMPILKAN PESANAN
    // =========================

    cout << "\n============================" << endl;
    cout << "       DETAIL PESANAN       " << endl;
    cout << "============================" << endl;

    cout << "Film        : " << film[indexFilm] << endl;
    cout << "Jumlah tiket: " << jumlahKursi << endl;
    cout << "Total harga : Rp" << totalHarga << endl;

    // Menampilkan kursi terakhir
    tampilkanKursi(kursi);

    // =========================
    // PEMBAYARAN
    // =========================

    int pembayaran;

    cout << "\nMasukkan uang pembayaran: Rp";
    cin >> pembayaran;

    if (pembayaran >= totalHarga) {

        int kembalian = pembayaran - totalHarga;

        cout << "\nPembayaran berhasil!" << endl;
        cout << "Kembalian: Rp" << kembalian << endl;

    } else {

        cout << "\nUang tidak cukup!" << endl;
        cout << "Kekurangan: Rp"
             << totalHarga - pembayaran
             << endl;
    }

    cout << "\nTerima kasih telah memesan tiket!" << endl;

    return 0;
}
