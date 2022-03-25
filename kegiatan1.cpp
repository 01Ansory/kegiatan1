#include <iostream>
#include <conio.h>

using namespace std;

class Hitung{
	friend istream& operator>>(istream&, Hitung&);
	friend ostream& operator<<(ostream&, Hitung&);
	
	public:
		hitung();
		void hitung_jumlahnya(){
			jumlah=(a+b+c);
		}
	private:
		int a,b,c;
		int jumlah;
};

Hitung::hitung(){
	cout<<"program menghitung jumlah 3 integer\n";
	cout<<"selamat berkarya\n";
}

istream& operator>>(istream& in,Hitung& masukan ){
	cout<<"masukan nilai a:";in>>masukan.a;
	cout<<"masukan nilai b:";in>>masukan.b;
	cout<<"masukan nilai c:";in>>masukan.c;
	return in;
}

ostream& operator<<(ostream& out,Hitung& keluaran ){
	out<<"nilai a:"<<keluaran.a<<endl;
	out<<"nilai b:"<<keluaran.b<<endl;
	out<<"nilai c:"<<keluaran.c<<endl;
	out << "Jumlah 3 integer di atas : " << keluaran.jumlah << endl;
	return out;
}

int main(){
	Hitung x;
	cin>>x;
	x.hitung_jumlahnya();
	cout<<x;
	getch();
	return 0;
}
