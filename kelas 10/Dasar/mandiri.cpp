#include <iostream>
#include <conio.h>
using namespace std;

int main() 
{
    int a, b;
    int hasil;

    cout << "masukan bilangan pertama: ";
    cin >> a;

    cout << "masukan bilangan kedua: ";
    cin >> b;

    hasil = a + b;
    cout << "hasil penjumlahan: " << hasil << std::endl;

    return 0;
}