// PertemuanPertama.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() 
{
  //begin
  //numeric nAlas,nTinggi, nLuas
  //Display 'Masukkan Alas ='
  //Accept nAlas
  //Display 'Masukkan Tinggi ='
  //Accpet nTinggi
  //Compute nLuas = nAlas*nTinggi/2
  //Display 'Luasnya =' + nLuas
  //End   

	float nAlas, nTinggi, nLuas;
	cout << "Masukkan Alas = ";
	cin >> nAlas;
	cout << "Masukkan Tinggi =";
	cin >> nTinggi;
	nLuas = nAlas * nTinggi / 2;
	cout << "Luasnya = " << nLuas;

	int panjang, lebar, luas;
	cout << "Masukkan Panjang = ";
	cin >> panjang;
	cout << "Masukkan Lebar = ";
	cin >> lebar;
	luas = panjang * lebar;
	cout << "Luas Persegi Panjang adalah = " << luas;
}


