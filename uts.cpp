#include <iostream>

using namespace std;

int main(){
    int kg, jumlahmg, jumlah, jmlhorg, org1, org2, org3, ssmangga;
    string nama;

    cout<<"membeli mangga (kg) : ";cin>>kg;
    cout<<"tetangga beranggotakan\n";

    cout<<"1 orang :"  ; cin>>org1;
    cout<<"2 orang :"  ; cin>>org2;
    cout<<"3 orang :"  ; cin>>org3;

    jumlah = kg * 2;

    jmlhorg = (org1 * 1) + (org2 * 2 ) + (org3 * 3);
    ssmangga = jumlah - jmlhorg;
    if(ssmangga<0){
        cout<<"mangga kurang";
    }else{
        cout<<"sisa mangga :"<<ssmangga;
    }
}