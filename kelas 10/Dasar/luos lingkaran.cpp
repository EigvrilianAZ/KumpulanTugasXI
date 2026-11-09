#include <iostream>
using namespace std;

int main()
{
    const float Pl = 3.14;
    float luarLingkaran, jari2;

    cout <<"\n === Program luas lingkaran ===\n\n";
    cout <<"masukan nilai jari jari : "; cin>>jari2;

    Pl = 10; //seandainya Pl dirubah 10 maka akan error // silakan dicoba

    luarLingkaran = Pl * jari2 * jari2;
    cout <<"luas lingkaran : "<<luarLingkaran<<endl;
    return 0;
}