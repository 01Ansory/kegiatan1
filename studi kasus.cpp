#include <iostream>
using namespace std;

int main() {
  int pe, px, TL, TH, pilih;
  string Nama;
  pe = 7000;
  px = 9000;
  
  cout<<"		SPBU "<<endl;cout<<endl;
  cout<<" MASUKAN NAMA : ";
  getline(cin, Nama);cout<<endl;
  cout<<" INPUTKAN JENIS "<<endl;
  cout<<"1. PERTALITE "<<endl;
  cout<<"2. PERTAMAX "<<endl;
  cout<<"INPUTKAN PILIHAN = ";cin>>pilih;cout<<endl;
  cout<<"INPUTKAN JUMLAH LITER = ";cin>>TL;
  
if (pilih == 1){TH = pe * TL;
}
	else if (pilih == 2){TH = px * TL;
}

cout<<endl;
cout<<"			STRUK BELANJA "<<endl;
cout<<endl;
cout<<"NAMA PEMBELI : "<<Nama<<endl;
cout<<"TOTAL LITER  : "<<TL<<" liter"<<endl;
cout<<"JENIS BAHAN  : ";

if (pilih == 1){cout<<"PERTALITE"<<endl;
}
	else if (pilih == 2){cout<<"PERTAMAX"<<endl;
}

cout <<"total harga  : RP. "<<TH;

}



