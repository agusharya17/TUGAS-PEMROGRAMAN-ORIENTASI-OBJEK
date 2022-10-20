# include <iostream>
using namespace std;
	
int main(){
	
	cout<<"Nama = Dwi Agus Haryanto\n";
	cout<<"NIM = 312110033\n";
	cout<<"Kelas = TI.21.C2\n";
	cout<<endl;

	int energi, kecepatan;
	string arah, keterangan, keterangan2, warna;
	
	cout<<"Masukkan warna = "; cin>> warna;
	cout<<"Mengisi energi = "; cin>>energi;
	cout<<endl;
	cout<<"Nyalakan mesin Y/T = "; cin>>keterangan;
	if(keterangan=="Y"||keterangan == "y"){
		cout<<endl<<"Terbang/Turun = ";
		cin>>keterangan2;
		if(keterangan2=="terbang"){
			cout<<"Tambah kecepatan = ";cin>>kecepatan;
			cout<<"Arah = "; cin>>arah;
			cout<<endl;
		}
		else{
			cout<<"Kurangi kecepatan = "; cin>>kecepatan;
			cout<<"Arah = ";cin>>arah;
			cout<<endl;
		}
		cout<<"warna Pesawat Tempur = "<<warna<<endl;
		cout<<"Ketinggian = "<<kecepatan+1000<<" kaki"<<endl;
		cout<<"Energi = "<<energi-kecepatan/100<<endl;
		cout<<"Arah = "<<arah<<endl;
	}else{
		cout<<endl<<"OFF"<<endl;
		cout<<"Warna Pesawat Tempur = "<<warna<<endl;
		cout<<"Ketinggian = - kaki"<<endl;
		cout<<"Energi = -"<<endl;
		cout<<"Arah = -"<<arah<<endl;
	}
}