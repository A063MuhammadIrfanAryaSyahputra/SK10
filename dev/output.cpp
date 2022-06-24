#include <iostream>
#include <fstream>
#include "../base.h"
using namespace std;

    cout << "------------------------------\n";
    nimMahasiswa = new int[10];
    namaMahasiswa = new string[10];
    for(int j=0; j<tot; j++){
      *nimMahasiswa = nimMhs[j];
      nimMahasiswa += 1;
      *namaMahasiswa = namaMhs[j];
      namaMahasiswa +=1;
    }