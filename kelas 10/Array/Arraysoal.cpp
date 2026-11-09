#include <iostream>
using namespace std;

int main () {
    int a [8] = {0, 8, 0, 4, 2, 0, 1, 0 };
    int y,z;
    cout<<"Masukan Nilai Array" <<endl;

    for(y=0; y<8; y++) {
        cout<<"a["<<y<<"] = "; cin>>a[y];
    }

    cout<<'\n';
    cout<<"Menampilkan nilai yang telah dimasukkan "<<endl;
    for(z=0; z<8; z++) {
        cout<<"Nilai yang terdapat pada element ke- ";
        cout<<z+1<<" : "<<a[z]<<endl;
    }
    return 0;
}