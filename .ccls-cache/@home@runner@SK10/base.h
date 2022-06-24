#include <iostream>
using namespace std;

class bruh{
  public:
  void input();
  void proses();
  void output();
                   
private:
    int *nimMahasiswa;
    int nimMhs[10];
    int tot;
    string *namaMahasiswa;
    string namaMhs[10];
    
};
    

  void bruh::input(){
  	cout << "===================================================================\n";
  	cout << "Masukkan NIM lalu NAMA Mahasiswa yang berhasi masuk ke tahap final\n";
    cout << "==================================================================="<<endl;
	cout << "Berapa jumlah mahasiswa yang masuk kedalam tahap final ? "; cin >> tot;
    for (int j=0; j<tot; j++){
      cout << "Masukkan Nama  : ";
      cin >> namaMhs[j];
      cout << "Masukkan NIM   : ";
      cin >> nimMhs[j];
      cout<<endl;
    }
  }
  void bruh::proses(){
    cout << "========================================\n";
    nimMahasiswa = new int[10];
    namaMahasiswa = new string[10];
    for(int j=0; j<tot; j++){
      *nimMahasiswa = nimMhs[j];
      nimMahasiswa += 1;
      *namaMahasiswa = namaMhs[j];
      namaMahasiswa += 1;
    } 
  }
  void bruh::output(){
    nimMahasiswa  -= tot;
    namaMahasiswa -= tot;
    cout<<"  Data Mahasiswa yang masuk tahap final "<<endl;
    cout << "========================================\n";
    for (int j=0; j<tot; j++) {
      cout << "\nNAMA : ";
      cout << *namaMahasiswa ;
      namaMahasiswa += 1;
      cout << "\nNIM  : " ;
      cout << *nimMahasiswa ;
      cout << "\n===========================\n";
      nimMahasiswa += 1;
    }
  }
