#include <iostream>
#include <string.h>
using namespace std;

int main () {
    const int n = 3;
    string Y[n];

    cout<<"Masukan "<<n<<" Nilai string:\n";
    for (int z = 0; z < n; z++) {
        cout<< "Y[" << z << "] = ";
        getline(cin, Y[z]);
    }

    cout<<"\nIsi array string:\n";
    for (int z = 0; z < n; z++) {
        cout<<Y[z];
        cout<<" ";
    }

    cout<<"\nUkuran array: "<<sizeof(Y)/sizeof(Y[0])<<endl;
    return 0;
}