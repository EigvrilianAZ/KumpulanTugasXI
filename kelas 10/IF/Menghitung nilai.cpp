#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int a, b;
    string c;

    cout<<"Masukan Nama: ";cin>>c;
    cout<<"Masukan Nomer Absen: ";cin>>a;
    cout<<"Masukan Nilai: ";cin>>b;

    if (b >= 95){
        cout<<"Selamat anda mendapatkan nilai A"<<endl<<endl;
    }
    else if (b >= 90){
        cout<<"Selamat anda mendapatkan nilai A-"<<endl<<endl;
    }
    else if (b >= 85){
        cout<<"Selamat anda mendapatkan nilai B+"<<endl<<endl;
    }
    else if (b >= 80){
        cout<<"Selamat anda mendapatkan nilai B"<<endl<<endl;
    }
    else if (b >= 75){
        cout<<"Selamat anda mendapatkan nilai B-"<<endl<<endl;
    }
    else if (b >= 70){
        cout<<"Selamat anda mendapatkan nilai C"<<endl<<endl;
    }
    else if (b >= 65){
        cout<<"Selamat anda mendapatkan nilai D"<<endl;
        cout<<"Anda wajib Melaksanakan Remidial"<<endl<<endl;
    }
    else if (b < 65){
        cout<<"Selamat anda mendapatkan nilai E"<<endl;
        cout<<"Anda wajip Melaksanakan Remidial"<<endl<<endl;
    }
    else if (b >100){
        cout<<"Nilai Tidak Benar"<<endl<<endl;
    }
    else{
        cout<<"Nilai Tidak Benar";
        cout<<endl<<endl;
    }

    cout<<"Nama "<<endl;
    cout<<c<<endl<<endl;

    cout<<"No Absen"<<endl;
    cout<<a<<endl<<endl;

    cout<<"Nilai"<<endl;
    cout<<b<<endl<<endl;

    return 0;
}