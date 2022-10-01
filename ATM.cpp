#include "iostream"
using namespace std;

int PIN, saldo, inputPIN, nominalTarik, rekeningTujuan, nominalTransfer, nominalSedekah;
char pilihanMenu;
bool mengulangMenu;

int main(){


    cout << "SELAMAT DATANG DI MESIN ATM PENGGANDA UANG" << endl;
    cout << "SILAKAN MASUKKAN KARTU ATM ANDA" << endl;

    cout << "Sebelum menggunakan kartu Anda, silakan setting terlebih dahulu PIN ATM Anda." << endl;
    cout << "Masukkan 6 Digit Angka PIN Baru Anda : " << endl;
    cin >> PIN;

    cout << "Masukkan Jumlah Saldo Anda : " << endl;
    cin >> saldo;


    do {
        cout << "MASUKKAN PIN ANDA DENGAN BENAR: " << endl;
        cin >> inputPIN;
    } while (inputPIN != PIN);

    do {
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
            case 'X':
                break;

            default:
                cout << "Masukkan Kode dengan benar" << endl;
        }

        char inginMengulang;
        do {
            cout << "Apakah Anda ingin melakukan transaksi lain? (Y/N)" << endl;

            cin >> inginMengulang;

            if (inginMengulang == 'Y'){
                mengulangMenu = true;
            } else{
                mengulangMenu = false;
            }
        } while (inginMengulang != 'Y' && inginMengulang != 'N');

    } while (mengulangMenu);

    cout << "Silakan Ambil Kartu Anda, Terima Kasih" << endl;

    return 0;
}

