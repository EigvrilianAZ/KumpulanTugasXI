#include <Iostream>
using namespace std;

int main (){
    int Y[3][2];
    int a, b;

    for (a=0; a<3; a++) {
        for (b=0; b<2; b++) {
            cout<<"Masukkan nilai untuk Y["<<a<<"]["<<b<<"]: ";
            cin>>Y[a][b];
        }
        
    }
    cout<<endl;

    for (a=0; a<3; a++) {
        for (b=0; b<2; b++) {
            cout<<Y[a][b]<<" ";
        }
     cout<<endl;
    }
    return 0;
}