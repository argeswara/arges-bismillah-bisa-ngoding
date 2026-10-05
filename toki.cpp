//Toki, Modul 6 - Larik Array
// #include <iostream>
// using namespace std;

// int main (){
//     int luas1 = 225 * 335;
//     int luas2 = 215 * 394;
//     int luas3 = 198 * 400;
//     int luas4 = 314 * 289;
//     int luas5 = 299 * 278;

//     int hasil = 0;

//     if (luas1 >= 80000){
//         hasil++;
//     }
//     if (luas2 >= 80000){
//         hasil++;
//     }
//     if (luas3 >= 80000){
//         hasil++;
//     }
//     if (luas4 >= 80000){
//         hasil++;
//     }
//     if (luas5 >= 80000){
//         hasil++;
//     }

//     cout << hasil ;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int luas[5] ;
//     luas[1] = 225 * 335;
//     luas[2] = 215 * 394;
//     luas[3] = 198 * 400;
//     luas[4] = 314 * 289;
//     luas[5] = 299 * 278;

//     int hasil = 0;

//     for (int i = 0; i < 5; i++){
//         if (luas[i] >= 80000) {
//             hasil++;
//         }
//     }
//     cout << hasil << endl;
// }

//
#include <iostream>
using namespace std;

int main() {
    int jual[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
    int beli[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};
    
    int bebek = 0;

    for (int i = 0; i < 10; i++){
        bebek = bebek + jual[i] - beli[i];
        cout << bebek << endl;
    }
}