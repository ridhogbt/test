#include <iostream>
using namespace std;

// Menampilkan papan permainan
void tampilkanPapan(char papan[]) {
    cout << "\n";
    cout << " " << papan[0] << " | " << papan[1] << " | " << papan[2] << " \n";
    cout << "---|---|---\n";
    cout << " " << papan[3] << " | " << papan[4] << " | " << papan[5] << " \n";
    cout << "---|---|---\n";
    cout << " " << papan[6] << " | " << papan[7] << " | " << papan[8] << " \n\n";
}

// Mengecek apakah ada pemenang
bool cekPemenang(char papan[], char pemain) {
    int kondisiMenang[8][3] = {
        {0, 1, 2}, {3, 4, 5}, {6, 7, 8}, // Baris
        {0, 3, 6}, {1, 4, 7}, {2, 5, 8}, // Kolom
        {0, 4, 8}, {2, 4, 6}             // Diagonal
    };

    for (int i = 0; i < 8; i++) {
        if (papan[kondisiMenang[i][0]] == pemain &&
            papan[kondisiMenang[i][1]] == pemain &&
            papan[kondisiMenang[i][2]] == pemain) {
            return true;
        }
    }
    return false;
}

// Mengecek apakah permainan berakhir seri
bool cekSeri(char papan[]) {
    for (int i = 0; i < 9; i++) {
        if (papan[i] != 'X' && papan[i] != 'O') {
            return false;
        }
    }
    return true;
}

int main() {
    char papan[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char pemainSekarang = 'X';

    while (true) {
        tampilkanPapan(papan);
        cout << "Giliran pemain " << pemainSekarang << "! Pilih posisi (1-9): ";
        int posisi;
        cin >> posisi;

        // Validasi input
        if (posisi < 1 || posisi > 9 || papan[posisi - 1] == 'X' || papan[posisi - 1] == 'O') {
            cout << "Posisi tidak valid! Coba lagi.\n";
            continue;
        }

        papan[posisi - 1] = pemainSekarang;

        // Cek apakah ada pemenang
        if (cekPemenang(papan, pemainSekarang)) {
            tampilkanPapan(papan);
            cout << "Pemain " << pemainSekarang << " menang!\n";
            break;
        }

        // Cek apakah permainan seri
        if (cekSeri(papan)) {
            tampilkanPapan(papan);
            cout << "Permainan seri!\n";
            break;
        }

        // Ganti giliran pemain
        pemainSekarang = (pemainSekarang == 'X') ? 'O' : 'X';
    }

    return 0;
}