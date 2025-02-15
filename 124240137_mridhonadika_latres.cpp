#include <iostream>
#include <iomanip>
#include <map>
#include <string>
#include <vector>

using namespace std;

string nama, produk, username, buah;
int kode, harga, ttlharga, password, barang, jumlah, diskon, total, bayar, total1, total2,  totalb;


int main(){
 cout<<"<======================================="<<endl;
 cout<<"<                                      >"<<endl;
 cout<<"<               RSHOP                  >"<<endl;
 cout<<"<                                      >"<<endl;
 cout<<"<======================================="<<endl;

 cout<<"masukan password :"; cin>>password;
 cout<<"masukan username :"; cin>>username;

 if (password == 124240137 && username == "mrn" )
 {
    cout<<"<======================================>\n";
    cout<<"<                                      >\n";
    cout<<"<                WELCOME               >\n";
    cout<<"<                                      >\n";
    cout<<"<======================================>\n";
    cout<< "kode | produk | harga\n";
    cout<< "001b | jeruk  | 15000\n";
    cout<< "002b | angur  | 18000\n";
    cout<< "003b | melon  | 14000\n";
    cout<< "004b | mangga | 16000\n";
    cout<< "005b | pepaya | 14500\n";
    cout<< "006b | selesai|    - \n";
 }else{
    cout<<"<======================================>\n";
    cout<<"<                                      >\n";
    cout<<"<           KESALAHAN SISTEM           >\n";
    cout<<"<                                      >\n";
    cout<<"<======================================>\n";
    
    return 0;
 }
 do{
        cout<<"Isikan kode :";
        cin>>harga;
        switch (harga){
            case 1 :
                buah = "jeruk";
                harga = 15000;
                cout<<"jml_item :";
                cin>>barang;
                total += harga * barang;
                total1 += harga * barang;
                cout<<barang<<" "<<buah;
                cout<<" = Rp. "<<harga*barang<<endl;
                break;
            case 2 :
                buah = "anggur";
                harga = 18000;
                cout<<"banyak buah :";
                cin>>barang;
                total += harga * barang;
                total1 += harga * barang;
                cout<<barang<<" "<<buah;
                cout<<" = Rp. "<<harga*barang<<endl;
                break;
            case 3 :
                buah = "melon";
                harga = 14000;
                cout<<"banyak buah :";
                cin>>barang;
                total += harga * barang;
                total1 += harga * barang;
                cout<<barang<<" "<<buah;
                cout<<" = Rp. "<<harga*barang<<endl;
                break;
            case 4 :
                buah = "mangga";
                harga = 16000;
                cout<<"banyak buah :";
                cin>>barang;
                total += harga * barang;
                total1 += harga * barang;
                cout<<barang<<" "<<buah;
                cout<<" = Rp. "<<harga*barang<<endl;
                break;
            case 5 :
                buah = "pepaya";
                harga = 14500;
                cout<<"banyak buah :";
                cin>>barang;
                total += harga * barang;
                total1 += harga * barang;
                cout<<barang<<" "<<buah;
                cout<<" = Rp. "<<harga*barang<<endl;
                break;
           case 6 : if (total > 100000){
                diskon = total * 0.05;
                total2 = total1 - diskon;
                cout<<"yang perlu dibayar : Rp. "<<total2<<"\ndibayar :";cin>>bayar;
                cout<<"KEMBALIAN : Rp."<<bayar - total2;
           }else{
                cout<<"yang perlu dibayar : Rp. "<<total        <<"\ndibayar :";cin>>bayar;
                    cout<<"KEMBALIAN : Rp."<<bayar - total1;

                harga = 6;}
                break;
            default :
                cout<<"pilihan salah"<<endl;
                break;
        }
    }while(harga != 6);

}