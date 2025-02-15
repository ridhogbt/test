#include <iostream>
using namespace std;

int main(){
    int harga, jml_barang, total, pilihan, diskon;
    string item;
    cout<<"====================================="<<endl;
    cout<<"            program kasir"<<endl;
    cout<<"====================================="<<endl;
    cout<<"barang tersidia : "<<endl;
    cout<<"001. Paracetamol 500mg \t: Rp 50,000"<<endl;
    cout<<"002. Amoxillin \t: Rp 16,000"<<endl;
    cout<<"003. Combantrin \t: Rp 25,000"<<endl;
    cout<<"004. Tolak angin / box \t: Rp 33,000"<<endl;
    cout<<"005. Mixagrip  \t: 3,000"<<endl;
    cout<<"====================================="<<endl;
    cout<<"006. Selesai"<<endl;
    
    do{
        cout<<"Isikan kode : ";
        cin>>pilihan;
        switch (pilihan){
            case 1 :
                item = "Paracetamol 500mg";
                harga = 50000;
                cout<<"jml_item :";
                cin>>jml_barang;
                total += harga * jml_barang;
                cout<<jml_barang<<" "<<item;
                cout<<" = Rp. "<<harga*jml_barang<<endl;
                break;
            case 2 :
                item = "Amoxillin";
                harga = 16000;
                cout<<"jml_item :";
                cin>>jml_barang;
                total += harga * jml_barang;
                cout<<jml_barang<<" "<<item;
                cout<<" = Rp. "<<harga*jml_barang<<endl;
                break;
            case 3 :
                item = "Combantrin";
                harga = 25000;
                cout<<"jml_item :";
                cin>>jml_barang;
                total += harga * jml_barang;
                cout<<jml_barang<<" "<<item;
                cout<<" = Rp. "<<harga*jml_barang<<endl;
                break;
            case 4 :
                item = "Tolak angin / box";
                harga = 33000;
                cout<<"jml_item :";
                cin>>jml_barang;
                total += harga * jml_barang;
                cout<<jml_barang<<" "<<item;
                cout<<" = Rp. "<<harga*jml_barang<<endl;
                break;
            case 5 :
                item = "Mixagrip";
                harga = 3000;
                cout<<"jml_item :";
                cin>>jml_barang;
                total += harga * jml_barang;
                cout<<jml_barang<<" "<<item;
                cout<<" = Rp. "<<harga*jml_barang<<endl;
                break;
            case 6 : 
                cout<<"Total belanja : Rp. "<<total<<endl;
                pilihan = 6;
                break;
            default :
                cout<<"pilihan salah"<<endl;;
                break;
        }
    }while(pilihan != 6);

    if (total > 100000)
    {
        diskon = harga * 5;
        cout<<"harga diskon :"<< diskon;
    }
    
    cout<<"Terimakasih"<<endl;
    
    return 0;
}