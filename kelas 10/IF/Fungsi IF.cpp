#include <iostream>
using namespace std;

int main() {
    int angka ;
    char b ;
    cout<<"Masukan Bilangan Bulat:  ";
    cin>>angka;
    if (angka >0 && angka <10){
        cout <<angka << " Lebih besar dari Nol dan lebih kecil dari sepuluh";
        cout <<endl<<endl;
    }
    cout <<"Masukan sebuah huruf: ";
    cin>>b;
    if (b== 'A' ||b== 'a' ||b== 'I'||b== 'i'||
        b== 'U'||b== 'u'||b== 'E'||b== 'e'||b== 'O'||b== 'o'){
        cout <<b <<" Adalah salah satu huruf Vokal";
        cout << endl<<endl;
    }
    return 0;

}