#include <iostream>
#include <fstream>
#include "../base.h"
using namespace std;

   nimMahasiswa  -= tot;
    namaMahasiswa -= tot;
    cout<<"Data Mahasiswa "<<endl;
    for (int j=0; j<tot; j++) {
      cout << "\nNama : ";
      cout << *namaMahasiswa ;
      namaMahasiswa += 1;
      cout << "\nNim : " ;
      cout << *nimMahasiswa ;
      cout << "\n------------------------------\n";
      nimMahasiswa += 1;
    }