#include <iostream>
using namespace std;

// Fungsi rekursif untuk mencari angka Fibonacci pada urutan ke-n
int fibonacci(int n) {
    // Base case: jika urutan 0 kembalikan 0, jika 1 kembalikan 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Recursive step: jumlah dari dua angka sebelumnya
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int jumlahAngka;
    cout << "Input number: ";
    cin >> jumlahAngka;
    
    cout << "Fibonacci sequence:" << endl;
    
    // Perulangan untuk mencetak deret dari indeks ke-0 hingga ke-(jumlahAngka - 1)
    for (int i = 0; i < jumlahAngka; i++) {
        cout << fibonacci(i);
        // Cetak koma pemisah kecuali untuk angka terakhir
        if (i < jumlahAngka - 1) {
            cout << ", ";
        }
    }
    cout << endl;
    
    return 0;
}


#include <iostream>
using namespace std;

// Fungsi untuk mengonversi Desimal ke Biner
void desimalKeBiner() {
    int decimal;
    cout << "Input your decimal: ";
    cin >> decimal;
    
    // Array untuk menyimpan digit biner (karena kita sudah belajar array di Week 5)
    int binaryNum[32]; 
    int i = 0;
    
    if (decimal == 0) {
        cout << "Your binary is: 0" << endl;
        return;
    }
    
    // Proses pembagian berulang dengan 2
    while (decimal > 0) {
        binaryNum[i] = decimal % 2; // Simpan sisa bagi
        decimal = decimal / 2;      // Bagi angka dengan 2
        i++;
    }
    
    cout << "Your binary is: ";
    // Mencetak array dari urutan belakang (karena sisa bagi dibaca terbalik)
    for (int j = i - 1; j >= 0; j--) {
        cout << binaryNum[j];
    }
    cout << endl;
}

// Fungsi untuk mengonversi Biner ke Desimal
void binerKeDesimal() {
    long long binary; // Menggunakan long long jika angka binernya panjang
    cout << "Input your binary: ";
    cin >> binary;
    
    int decimal = 0;
    int base = 1; // Merepresentasikan pangkat dari 2 (dimulai dari 2^0 = 1)
    long long temp = binary;
    
    // Mengambil satu per satu angka dari kanan
    while (temp > 0) {
        int digitTerakhir = temp % 10;
        temp = temp / 10;
        decimal = decimal + (digitTerakhir * base);
        base = base * 2; // Naikkan pangkatnya (1, 2, 4, 8, 16, dst)
    }
    
    cout << "Your decimal is: " << decimal << endl;
}

int main() {
    int option, repeat;
    
    // Menggunakan do-while loop agar program berjalan setidaknya sekali, lalu bisa diulang
    do {
        cout << "[1] Decimal to binary" << endl;
        cout << "[2] Binary to decimal" << endl;
        cout << "Input your option: ";
        cin >> option;
        
        if (option == 1) {
            desimalKeBiner();
        } else if (option == 2) {
            binerKeDesimal();
        } else {
            cout << "Pilihan tidak valid." << endl;
        }
        
        cout << "Repeat? [0:No/1:Yes]: ";
        cin >> repeat;
        
    } while (repeat == 1); // Program akan berulang selama user memasukkan 1
    
    cout << "Program ends" << endl;
    return 0;
}
