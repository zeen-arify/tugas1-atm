#include "iostream"
using namespace std;

int PIN = 123456;
int saldo = 10000000;
int inputPIN, nominalTarik, rekeningTujuan, nominalTransfer, nominalSedekah;
char pilihanMenu;

int main(){

    cout << "SELAMAT DATANG DI MESIN ATM PENGGANDA UANG" << endl;
    cout << "SILAKAN MASUKKAN KARTU ATM ANDA" << endl;
    do {
        cout << "MASUKKAN PIN ANDA DENGAN BENAR: " << endl;
        cin >> inputPIN;
    } while (inputPIN != PIN);

    do {
        cout << "MASUKKAN PILIHAN ANDA DENGAN BENAR : " << endl;
        cout << "A : Cek Saldo" << endl;
        cout << "B : Tarik Tunai" << endl;
        cout << "C : Transfer" << endl;
        cout << "D : Sedekah" << endl;
        cin >> pilihanMenu;
    } while (pilihanMenu != 'A' && pilihanMenu != 'B' && pilihanMenu != 'C' && pilihanMenu != 'D' );

    switch (pilihanMenu) {
        case 'A':
            cout << "Saldo Anda saat ini adalah " << saldo << endl;
            break;
        case 'B':
            cout << "Masukkan Nominal yang Anda Inginkan :" << endl;
            cin >> nominalTarik;
            cout << "Silakan Tunggu, permintaan Anda sedang kami proses." << endl;
            saldo -= nominalTarik;
            cout << "Uang Anda telah siap, silakan ambil" << endl;
            cout << "Sisa saldo Anda sekarang adalah : " << saldo << endl;
            break;
        case 'C':
            cout << "Masukkan nomor rekening tujuan :" << endl;
            cin >> rekeningTujuan;
            cout << "Masukkan nominal yang ingin Anda transfer :" << endl;
            cin >> nominalTransfer;
            cout << "Silakan Tunggu, permintaan Anda sedang kami proses." << endl;
            saldo -= nominalTransfer;
            cout << "Transfer ke rekening " << rekeningTujuan << " sebesar " << nominalTransfer << " telah berhasil." << endl;
            cout << "Sisa saldo Anda sekarang adalah : " << saldo << endl;
            break;
        case 'D':
            cout << "Masukkan nominal sedekah Anda :" << endl;
            cin >> nominalSedekah;
            cout << "Silakan Tunggu, permintaan Anda sedang kami proses." << endl;
            saldo -= nominalSedekah;
            cout << "Sisa saldo Anda sekarang adalah : " << saldo << endl;
            break;

        default:
            cout << "Masukkan Kode dengan benar" << endl;
    }








    return 0;
}

