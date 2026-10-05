#include <iostream>
using namespace std;

int hargaKursi (int a){
    int hargaTetap;
    if (a == 1 || a == 4){
        hargaTetap = 35000;
    }else if(a == 2 || a == 3){
        hargaTetap = 30000;
    }
    return hargaTetap;
}

int main() {
    //MENGATUR SEMUA KURSI MENJADI KOSONG
    bool kursi[8][4];
    for (int i=0; i<8; i++){
        for (int j=0;j<4; j++){
            kursi[i][j]=false;
        }
    }


    int repeat;
    do{
         //MENAMPILKAN KURSI YANG TERSEDIA
        cout<<"Berikut Kursi yang Tersedia: "<<endl;
        cout<<"----------------------------------------------------------"<<endl;
        cout<<"         A   B   C   D"<<endl;
        for (int i=0; i<8; i++){
            cout<<"baris "<<i+1<<" ";
            for (int j=0; j<4; j++){
                if (kursi[i][j]==false){
                    cout<<"[0] ";
                }
                else {
                    cout<<"[x] ";
                }
            }
            cout<<endl;
        }


        //MEMILIH BARIS DAN KOLOM KURSI
        int baris, numKolom;
        char kolom;

        cout<<"----------------------------------------------------------"<<endl;
        cout<<"SILAHKAN MEMILIH KURSI (KOLOM MENGGUNAKAN HURUF KAPITAL)"<<endl;
        cout<<"Baris: ";
        cin>>baris;
        cout<<"Kolom: ";
        cin>>kolom;

        switch(kolom){
            case 'A':
            numKolom = 1;
            break;
            case 'B':
            numKolom = 2;
            break;
            case 'C':
            numKolom = 3;
            break;
            case 'D':
            numKolom = 4;
            break;
        }

        if(baris<1||baris>8||numKolom<1||numKolom>4){
            cout<<"KURSI TIDAK DITEMUKAN!!"<<endl;
        }
        else{
            if(kursi[baris-1][numKolom-1]==true){
                cout<<"KURSI SUDAH TERISI!!"<<endl;
            }
            else{
                cout<<"Anda memilih kursi: "<<kolom<<"-"<<baris<<endl;

                kursi[baris-1][numKolom-1] = true;

                cout<<"Harga kursi: "<<hargaKursi(numKolom)<<endl;
                cout<<"----------------------------------------------------------"<<endl;
            
                cout<<"Ulang Program?(1.yes/2.no): ";
                cin>>repeat;
                cout<<"----------------------------------------------------------"<<endl;
            }
           
        }

        
    }while(repeat == 1);
   
    
}