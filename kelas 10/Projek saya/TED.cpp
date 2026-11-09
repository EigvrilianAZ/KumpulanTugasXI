#include <iostream>
#include <string>
using namespace std;

int main () {
    string username, password;
    int pilihan;

    string userbenar = "Zaro";
    string passbenar = "3006";

    do {
        cout << "\n=== MENU ===" << endl;
        cout << "1. Login" << endl;
        cout << "2. Register" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Menu Login dipilih" << endl;
                cout << "=== LOGIN ===" << endl;

                cout << "Masukkan username = ";
                cin >> username;
                cout << "Masukkan password = ";
                cin >> password;

                if (username == userbenar && password == passbenar ) {
                     cout << "\nLogin Berhasil" << endl;
                     cout << "Selamat Datang \n" << username << endl;
                    int menu1 = 1;
                }
                else {
                     cout << "\n Login Gagal" << endl;
                     cout << "Username Salah / Password Salah" << endl;
                }
                break;

            case 2:
                cout << "Menu Register dipilih" << endl;
                break;

            case 3:
                cout << "Program selesai" << endl;
                break;

            default:
                cout << "Pilihan tidak tersedia" << endl;
        }

    } while (menu1 == 1);

    return 0;

}