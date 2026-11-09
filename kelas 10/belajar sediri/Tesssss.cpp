#include <iostream>
#include <string.h>
using namespace std;

int main () {
    const int z = 5;
    string abs[5];
    string nama[5];
    string jurusan[5];

    for (int a=0; a<z; a++) {
        cout<<"=================================="<<endl;
        cout<<"[+] Masukkan Data Siswa ke - "<<a<<" [+]"<<endl;
        cout<<"Masukkan No. Absen : "; cin >> abs[a] ;cout << endl;
        cout<<"Masukkan Nama : "; cin >> nama[a] ;cout << endl;
        cout<<"Masukkan Jurusan : "; cin >> jurusan[a] ;cout << endl;
    }
    cout<<"===================================="<<endl;
    cout<<"No. Absen      Nama        Jurusan"<<endl;

    for (int b=0; b<5; b++) {
        cout<<abs[b]<<"              "<<nama[b]<<"           "<<jurusan[b];
        cout<<endl;
    }
    
 return 0;
}
