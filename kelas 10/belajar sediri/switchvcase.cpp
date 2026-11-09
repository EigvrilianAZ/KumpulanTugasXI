#include<iostream>
using namespace std;

int main (){
    int a;
    
    cout<<"Masukan Bilangan";cin>>a;

    switch(a){
        case 1:
        cout <<"A=1"<< endl;
        break;
        case 2:
        cout <<"A=2"<<endl;
        case 3:
        cout <<"A=3"<<endl;
        case 4:
        cout <<"A=4"<<endl;
        case 5:
        cout <<"A=5"<<endl;
        default:
        cout << "defauld"<<endl;

    }
    cout<<"akhir dari program"<<endl;

    return 0;

}