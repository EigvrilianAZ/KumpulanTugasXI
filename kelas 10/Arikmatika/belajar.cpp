#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

main()
{
    char a[10], b[10];
    int bil1, bil2,imax, imin;

    cout<<"masukan bilangan 1 : ";cin>>a;
    cout<<"masukan bilangan 2 : ";cin>>b;

    bil1 = atoi(a);
    cout<<"bilangan 1 adalah "<<bil1<<endl;

    bil2 = atoi(b);
    cout<<"bilangan 2 adalah "<<bil2<<endl;

    imax = max(bil1,bil1);
    cout<<"nilai yang paling besar adalah "<<imax<<endl;

    imin = min(bil1,bil2);
    cout<<"nilai yang paling kecil adalah "<<imin<<endl;

    getch();
}
