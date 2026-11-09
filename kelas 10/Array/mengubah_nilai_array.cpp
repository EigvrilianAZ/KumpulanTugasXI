#include <iostream>
#include <string>
using namespace std;

int main() {
    string Y[3] = { "Eigvrilian Ananda Zilbyaro", "12", "Laki laki" };

    cout<<endl;
    cout<<"Saya"<<endl;
    cout<<"Nama : "<<Y[0]<<endl;
    cout<<"NO   : "<<Y[1]<<endl;
    cout<<"Jenis kelamin: "<<Y[2]<<endl;
    
    Y[0] = "Early Kiara Nidya Rahmadhai";
    Y[1] = "11";
    Y[2] = "Perempuan";
    cout<<endl;

    cout<<"Teman sebelum saya"<<endl;
    cout<<"Nama : "<<Y[0]<<endl;
    cout<<"NO   : "<<Y[1]<<endl;
    cout<<"Jenis kelamin: "<<Y[2]<<endl;
    cout<<endl;

    return 0;
}