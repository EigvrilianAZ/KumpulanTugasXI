#include <iostream>
#include <string.h>
using namespace std;

int main (){
    string Y[4][4];
    int a, b;

    for (a=0; a<4; a++) {
        for (b=0; b<4; b++) {
            cout<<"Masukkan Nama Siswa : ";
            cin >> Y[a][b] ;
        }
        
    }
    cout<<endl;

    for (a=0; a<4; a++) {
        for (b=0; b<4; b++) {
            cout<<Y[a][b]<<" ";
        }
     cout<<endl;
    }
    return 0;
}