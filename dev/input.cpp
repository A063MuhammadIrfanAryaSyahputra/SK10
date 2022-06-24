#include <iostream>
#include <fstream>
#include "../base.h"
using namespace std;


cout << "===================================================================\n";
  	cout << "Masukkan NIM lalu NAMA Mahasiswa yang berhasi masuk ke tahap final\n";
    cout << "==================================================================="<<endl;
	cout << "Berapa jumlah mahasiswa yang masuk kedalam tahap final ? "; cin >> tot;
    for (int j=0; j<tot; j++){
      cout << "Masukkan Nama  : ";
      cin >> namaMhs[j];
      cout << "Masukkan Nim : ";
      cin >> nimMhs[j];
      cout<<endl;
    }