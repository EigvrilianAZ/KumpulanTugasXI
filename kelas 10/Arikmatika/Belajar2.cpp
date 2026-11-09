#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

int main()
{
    int a, b ,c;
    float ipangkat, iakar, isin, icos, itan;

    cout << "masukan nilai a (sudut dalam derajat): ";
    cin >> a;
    cout << "masukkan nilai b: ";
    cin >> b;
    cout << "masukan nilai c: ";
    cin >> c;

    iakar = sqrt(b);
    cout << "akar dari " << b << " adalah " << iakar << endl;

    ipangkat =pow(b, c);
    cout << b << " pangkat " << c << " adalah " << ipangkat <<endl;

    // ubah derajat ke radian sebelum menghitung sin, cos, tan
    float rad = a * M_PI / 180;

    isin = sin(rad);
    cout << " sin " << a << "derajat = " << isin << endl;

    icos = cos(rad);
    cout << " cos " << a << "derajat = " << icos << endl;

    itan = tan(rad);
    cout << " tan " << a << "derajat = " << itan << endl;

    getch();

}