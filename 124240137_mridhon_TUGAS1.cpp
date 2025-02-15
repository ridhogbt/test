#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama;
    string nim;
    char jenisKelamin;
    string alamat;
    string agama;
    string email;
    string no, HP;
/*masukan data pribadi*/
    cout << "Welcome kawan tolong isi data diri" << endl;
    cout << "Masukkan nama kamu:";getline(cin, nama);
    cout << "Masukkan nim kamu:";cin >> nim;
    cout << "Masukkan jenis kelamin kamu (L=Laki-laki/P=Perempuan):";
    cin >> jenisKelamin;

    cin.ignore();

    cout << "Masukkan alamat domisili kamu saat ini:";
    getline(cin, alamat);

    cout << "Masukkan agama kamu: ";
    getline(cin, agama);

    cout << "Masukkan email kamu:";
    cin >> email;

    cout << "Masukkan no hp kamu'aktif':";
    cin >> no ;
    /*haisl data pribadi*/
    cout << "\n--- data diri kamu! ---" << endl;
    cout << "Nama     : " << nama << endl;
    cout << "nim      : " << nim << endl;
    cout << "Jenis Kelamin : " << (jenisKelamin == 'L' ? "Laki-laki" : "Perempuan") << endl;
    cout << "Alamat   : " << alamat << endl;
    cout << "Agama    : " << agama << endl;
    cout << "email    : " << email << endl;
    cout << "no hp    : " << no << endl;

    return 0;
}
