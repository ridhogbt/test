#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nama, nim, kelas;

    cout << "Masukkan data:\n";
    cout << "Nama   : "; getline(cin, nama);
    cout << "NIM    : "; getline(cin, nim);
    cout << "kelas   : "; getline(cin, kelas);

    cout << "\nInilah data Anda :\n";
    cout << "Nama   : " << nama << endl;
    cout << "NIM    : " << nim << endl;
    cout << "kelas   : " << kelas << endl;

    cout << "\nDalam bentuk tabel :\n";
    cout << "=========================================\n";
    cout << "NIM          | Nama           | kelas    \n";
    cout << "=========================================\n";
    cout << setw(12) << left << nim << " | " 
         << setw(14) << left << nama << " | " 
         << setw(7) << left << kelas << endl;
    cout << "-----------------------------------------\n";

   //menghitung suhu
    float celsius, fahrenheit, kelvin, reamur;

    cout << "\nMasukkan suhu dalam Celsius: ";
    cin >> celsius;

    fahrenheit = (9.0 / 5 * celsius) + 32;
    kelvin = 273 + celsius;
    reamur = (4.0 / 5 * celsius);

    cout << "\nHasil konversi:\n";
    cout << "Fahrenheit : " << fahrenheit << endl;
    cout << "Kelvin     : " << kelvin << endl;
    cout << "Reamur     : " << reamur << endl;

    return 0;
}
