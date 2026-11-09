#include <iostream>
using namespace std;

int main() {
    int a = 9;
    
    do 
     {
        int b = 1;
        do
       {
     cout<<b<<" ";
     b++;
       }
     while (b <= a);
        cout<<endl;
        a--;
    }
        while (a >= 1);

    return 0;
}