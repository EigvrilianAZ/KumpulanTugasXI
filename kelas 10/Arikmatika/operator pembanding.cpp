#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout<<" masukan nilai a : ";cin>>a;
    cout<<" masukan nilai b : ";cin>>b;

    cout<<"operator perbandingan\n\n";
    cout<<"o artinya salah\n 1 artinya benar\n\n";
    c=(a==b);
    cout<<"a==b hasilnya "<<c<<endl;

    c=(a!=b);
    cout<<"a!=b hasilnya "<<c<<endl;

    c=(a>b);
    cout<<"a>b hasilnya "<<c<<endl;

    c=(a<b);
    cout<<"a<B hasilnya "<<c<<endl;

    c=(a>=b);
    cout<<"a>=b hasilnya "<<c<<endl;

    c=(a<=b);
    cout<<"a>=b hasilnya "<<c<<endl;

    return 0;
}