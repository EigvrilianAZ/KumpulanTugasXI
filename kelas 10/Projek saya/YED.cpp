#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

void Login();
void Register();
void lupakatasandi();
void loby();
void akun();
void tas();
void toko();
void rodakeberuntungan();

int main() {

    int c;
    cout<<"\t\t\t_________________________________________________________________________________________\n\n\n";
    cout<<"\t\t\t                       Selamat datang, silahkan Login                                     \n\n\n";
    cout<<"\t\t\t_______________________             MENU             ______________________________________\n\n\n";
    cout<<"                                                                                                  \n\n\n";
    cout<<"\t| 1. LOGIN                               |"<<endl;
    cout<<"\t| 2. REGISTER                            |"<<endl;
    cout<<"\t| 3. LUPA KATA SANDI                     |"<<endl;
    cout<<"\t| 4. KELUAR                              |"<<endl;
    cout<<"\n\t\t\t Masukkan pilihan anda : ";
    cin>>c;
    cout<<endl;

    switch(c) 
    {
        case 1:
             Login();
             break;

        case 2:
             Register();
             break;

        case 3:
              lupakatasandi();
              break;

        case 4:
             cout<<"\t\t\t Terimakasih \n\n";
             break;
        default:
            system("cls");
            cout<<"\t\t\t Silakan pilih opsi yang ada di atas \n"<<endl;
            main();

    }

}

 void Login()
  {
     int count;
     string userid, password, id, pass;
     system("cls");
     cout<<"\t\t\t Silakan masukan Username dan Password : "<<endl;
     cout<<"\t\t\t Username ";
     cin>>userid;
     cout<<"\t\t\t Password ";
     cin>>password;

     ifstream input("records.txt");

     while(input>>id>>pass)
    {
        if(id==userid && pass==password)
         {
             count=1;
             system("cls");
         }
     }
     input.close();
    
     if(count==1)
     {
        cout<<userid<<"\n Berhasil Login \n Terimakasih sudah login \n";
        //tanda masuk menu utama//
        loby();
     }
     else{
        cout<<"\n Gagal Login \n Silahkan cek Username dan Password \n";
        main();
     }
  }



  void Register()
  {
     string ruserid,rpassword,rid,rpass;
     system("cls");
     cout<<"\t\t\t Masukkan username : ";
     cin>>ruserid;
     cout<<"\t\t\t Masukkan Password : ";
     cin>>rpassword;

     ofstream f1("records.txt", ios::app);
     f1<<ruserid<<' '<<rpassword<<endl;
     system("cls");
     cout<<"\n\t\t\t Berhasil Register \n";
     main();

  }
  void lupakatasandi()
  {
     int option;
     system("cls");
     cout<<"\t\t\t Anda lupa kata sandi? jangan kawatir \n";
     cout<<" 1. Mencari ID Username anda "<<endl;
     cout<<" 2. Kembali ke menu "<<endl;
     cout<<"\t\t\t Masukkan pilihan anda : ";
     cin>>option;
     switch(option)
     {

         case 1 :
         {
             int count=0;
             string suserid,sid,spass;
             cout<<"\n\t\t\t Masukkan Username kamu sebelumnya ";
             cin>>suserid;

             ifstream f2("recorrds.txt");
             while(f2>>sid>>spass)
             {
                 if(sid==suserid)
                 {
                     count=1;
                  }
             }
             f2.close();
             if(count==1)
             {
                 cout<<"\n\n Akun anda di temukan \n";
                 cout<<"\n\n Password anda : "<<spass;
                 main();
             }
             else{
                cout<<"\n\t Maaf akun anda tidak di temukan ";
                main();
             }
             break;
         }

         case 2 :
         {
             main();
             break;
         }
         default :
             cout<<"\t\t\t Pilihan salah, silakan coba lagi "<<endl;
             lupakatasandi();
     }
  }

  void loby()
  {
    int a;
    cout<<"\t\t\t______________________________________________________________________________________\n\n\n";
    cout<<"\t\t\t                                     Menu                                              \n\n\n";
    cout<<"\t\t\t________________________________________________________________________________________\n\n\n";
    cout<<"\t\t\t                                                                                         \n\n\n";
    cout<<"\t| 1. Akun                    |"<<endl;
    cout<<"\t| 2. Tas                     |"<<endl;
    cout<<"\t| 3. Toko                    |"<<endl;
    cout<<"\t| 4. Roda keberuntungan      |"<<endl;
    cout<<"\n\t\t\t Masukkan pilihan anda : ";
    cin>>a;
    cout<<endl;

    switch(a)
    {
         case 1:
             void akun();
             break;

        case 2:
             void tas();
             break;
        
        case 3:
             void toko();
             break;

        case 4:
             void rodakeberuntungan();
             break;

        default:
        cout<<"\t\t\tSilahkan pilih opsi yang tersedia\n"<<endl;
        void loby();

    }

  }

  void akun()
  {
    cout<<"\t\t\t                                   Akun Anda                                      \n\n\n";
    cout<<"\t Nama : "<<endl;
  }

  