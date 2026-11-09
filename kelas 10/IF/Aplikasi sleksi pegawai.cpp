#include <iostream>
#include <string>

using namespace std;

int main(){

    int nilai1, nilai2, jabatan, sales1, sales2 ,sales3, kelamin;
    string nama;

    cout<<"======================="<<endl;
    cout<<"Masukan Nama: "<<endl;cin>>nama;
    cout<<"Masukan jenis jabatan"<<endl;
    cout<<"Engineer = 1"<<endl;cout<<"Sales =2"<<endl;
    cout<<"========================"<<endl;
    cin>>jabatan;

    if (jabatan == 1){
        cout<<"Masukan nilai tes pengetahuan: ";cin>>nilai1;
        if (nilai1 >= 75){
            cout<<"Masukan inlai tes keterampilan: ";cin>>nilai2;
            if (nilai2 >= 80){
                cout<<"Selamat Anda di terima menjadi Engineer";
            }
            else{
                cout<<"Mohon maaf anda tidak diterima";
            }
        }
        else {
            cout<<"Mohon maaf anda tidak di terima";
        }
    }
    else if (jabatan == 2){
        cout<<"Masukan hasil tes wawancara"<<endl;
        cout<<"Lulus = 1"<<endl;cout<<"Gagal = 2"<<endl;cin>>sales1;
        if  (sales1 == 1){
            cout<<"Masukan jenis kelamin"<<endl;
            cout<<"Laki laki = 1"<<endl;cout<<"Perempuan = 2"<<endl;cin>>kelamin;
            if (kelamin == 1){
                cout<<"Masukan tinggi badan"<<endl; cin>>sales2;
                if (sales2 >= 160){
                    cout<<"Selamat anda di terima sebagai Sales";
                }
                else {
                    cout<<"Mohon maaf anda tidak di terima";
                }
            }
            else if (kelamin == 2){
                cout<<"Masukan Tinggi badan"<<endl;cin>>sales3;
                if (sales3 >= 155){
                    cout<<"Selamat anda telah di terima menjadi Sales"<<endl;
                }
                else {
                    cout<<"MOhon maaf anda tidak di terima";}  
            }
            else {
                cout<<"Mohon maaf anda tidak di terima "<<endl;
            }
        }
        else {
            cout<<"Mohon maaf anda tidak di terima"<<endl;
        }    
    }

   
    return 0;
}