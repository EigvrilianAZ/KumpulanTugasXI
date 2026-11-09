#include <iostream>
using namespace std;

int main(){
    int a, b, hasil1, hasil2, hasil3, hasil4, hasil5, hasil6;

    cout <<"masukan nilai a = ";cin >> a;
    cout <<"masukan nilai b = ";cin >>b;
    cout<<endl;

    hasil1 = a && b;
    hasil2 = a || b;
    hasil3 = !a;
    hasil4 = !b;
    hasil5 = !(a && b);
    hasil6 = !(a || b);

    cout <<"= Program Ekspresi AND =" <<endl;
    cout <<"========================" <<endl;
    cout <<"Hasil dari a && b = " <<hasil1<<endl<<endl;

    cout <<"= Program Ekspresi OR =" <<endl;
    cout << "=======================" <<endl;
    cout <<"Hasil dari a || b = " <<hasil2<<endl<<endl;

    cout <<"= Program Eksperesi NOT =" <<endl;
    cout <<"========================" <<endl;
    cout <<" Hasil dari !a = " <<hasil3<<endl;
    cout <<" Hasil dari !b = " <<hasil4<<endl;

    cout <<"= Program Ekspresi NAND =" <<endl;
    cout <<"========================" <<endl;
    cout <<"Hasil dari !(a && b) = " <<hasil5<<endl<<endl;

    cout <<"= Program Eksperesi NOR =" <<endl;
    cout <<"=========================" <<endl;
    cout <<"Hasil dari !(a || b) = " <<hasil6<<endl<<endl;

    return 0;

}