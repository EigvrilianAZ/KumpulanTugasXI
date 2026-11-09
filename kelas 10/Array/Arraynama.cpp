#include <iostream>
using namespace std;

int main (){
    char Y[26] = { 'E', 'I', 'G', 'V', 'R', 'I', 'L', 'I', 'A', 'N', ' ', 'A', 'N', 'A', 'N', 'D', 'A', ' ', 'Z', 'I', 'L', 'B', 'Y', 'A', 'R', 'O'};

    for (int Z=0; Z<26; Z++) {
        cout<<Y[Z];
    }

    cout<<endl;
    cout<<"Ukuran array: "<<sizeof(Y)<<endl;

    return 0;
}

