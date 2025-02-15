#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    string nama, nim, plug;
    cout << "Masukkan : " << endl;
    cout << "Nama  : "; 
    getline(cin, nama);
    cout << "NIM   : "; 
    cin >> nim;
    cout << "Plug  : "; 
    cin >> plug;

    cout << "\nInilah data diri kamu: " << endl;
    cout << "Nama  : " << nama << endl;
    cout << "NIM   : " << nim << endl;
    cout << "Plug  : " << plug << endl;
    
    cout << "\nDalam bentuk tabel : " << endl;
    cout << "===================================================================================================" << endl;
    cout << setw(12) << "NIM" << "      | " 
         << setw(12) << "Nama" << "     | " 
         << setw(12) << "Plug" << "     |" << endl;
    cout << "===================================================================================================" << endl;
    cout << setw(12) << nim << "      | " 
         << setw(12) << nama << "     | " 
         << setw(12) << plug << "     | " << endl;
    cout << "---------------------------------------------------------------------------------------------------" << endl;

    return 0;
}




#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double c, fahrenheit, kelvin, reaumur;

    cout << "Masukkan suhu dalam Celcius: ";
    cin >> c;

    fahrenheit = (9.0 / 5.0) * c + 32;
    kelvin = 273 + c;
    reaumur = (4.0 / 5.0) * c;

    cout << "\nHasil konversi suhu:" << endl;
    cout << "Fahrenheit : " << fahrenheit << " ^F" << endl;
    cout << "Kelvin     : " << kelvin << " ^K" << endl;
    cout << "Reaumur    : " << reaumur << " ^R" << endl;

    return 0;
}