#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Deklarasi variabel untuk data diri
    string nama, nim, plug;
    
    // Input data dari user
    cout << "Masukkan :\n";
    cout << "Nama   : "; getline(cin, nama);
    cout << "NIM    : "; getline(cin, nim);
    cout << "Plug   : "; getline(cin, plug);

    // Menampilkan data yang diinput
    cout << "\nInilah data Anda :\n";
    cout << "Nama   : " << nama << endl;
    cout << "NIM    : " << nim << endl;
    cout << "Plug   : " << plug << endl;

    // Menampilkan data dalam bentuk tabel
    cout << "\nDalam bentuk tabel :\n";
    cout << "=========================================\n";
    cout << "NIM          | Nama           | Plug    \n";
    cout << "=========================================\n";
    cout << setw(12) << left << nim << " | " 
         << setw(14) << left << nama << " | " 
         << setw(7) << left << plug << endl;
    cout << "-----------------------------------------\n";

    // Deklarasi variabel untuk suhu
    float celsius, fahrenheit, kelvin, reamur;

    // Input suhu dalam Celsius
    cout << "\nMasukkan suhu dalam Celsius: ";
    cin >> celsius;

    // Konversi ke Fahrenheit, Kelvin, dan Reamur
    fahrenheit = (9.0 / 5 * celsius) + 32;
    kelvin = 273 + celsius;
    reamur = (4.0 / 5 * celsius);

    // Menampilkan hasil konversi
    cout << "\nHasil konversi:\n";
    cout << "Fahrenheit : " << fahrenheit << endl;
    cout << "Kelvin     : " << kelvin << endl;
    cout << "Reamur     : " << reamur << endl;

    return 0;
}
