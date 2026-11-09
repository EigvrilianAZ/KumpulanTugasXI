#include <string.h>
#include <iostream>
using namespace std;

int main() {
    char nama [10];
    char *judul;
    strcpy (nama, "Zaro");
    judul = (char *) "pemrograman Dasar";
    cout<<"nama : "<<nama<<endl;
    cout<<"judul buku : "<<judul<<endl;
    return 0;
}