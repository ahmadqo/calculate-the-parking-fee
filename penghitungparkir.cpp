#include<iostream.h>
#include<conio.h>
struct {
	int jam;
	int menit;
	int detik;
} masuk, keluar, selisih;

int main(){
	Mulai:
	cout<<"			SELAMAT DATANG"<<endl;
	cout<<"		          DI STMIK AKAKOM JANTI"<<endl;
	cout<<"			  Jl.Janti No.143"<<endl;
	cout<<"======================================="<<endl;
	int nopol;
	//input nomor polisi
	Nopol:
	cout<<"NO. POL <Max 4 Digit>	: "; cin>>nopol;
	if(nopol > 9999){
		cout<<"No.Polisi Tidak Boleh Melebihi 4 Digit"<<endl;
		goto Nopol;
	}
	//input data jam masuk
	Masuk:
	cout<<"DATA MASUK"<<endl;
	cout<<"============"<<endl;
	cout <<" 	 JAM	: "; cin >>masuk.jam;
	if(masuk.jam > 24){
		cout<<"Waktu yang anda masukkan tidak valid"<<endl;
		goto Masuk;
	}
	cout <<" 	 MENIT	: "; cin >>masuk.menit;
	if(masuk.menit > 59){
		cout<<"Waktu yang anda masukkan tidak valid"<<endl;
		goto Masuk;
	}
	cout <<"	 DETIK	: "; cin >>masuk.detik;
	if(masuk.detik > 59){
		cout<<"Waktu yang anda masukkan tidak valid"<<endl;
		goto Masuk;
	}
	cout<<endl;
	//input data jam keluar
	Keluar:
	cout <<"DATA KELUAR"<<endl;
	cout<<"============"<<endl;
	cout <<" 	 JAM	: "; cin >>keluar.jam;
	if(keluar.jam > 24){
		cout<<"waktu yang anda masukkan tidak valid"<<endl;
		goto Keluar;
	}
	cout <<" 	 MENIT	: "; cin >>keluar.menit;
	if(keluar.menit > 59){
		cout<<"waktu yang anda masukkan tidak valid"<<endl;
		goto Keluar;
	}
	cout <<" 	 DETIK	: "; cin >>keluar.detik;
	if(keluar.detik > 59){
		cout<<"waktu yang anda masukkan tidak valid"<<endl;
		goto Keluar;
	}
	cout<<"======================================="<<endl;
	
	int TotDetikmasuk = (masuk.jam*3600)+(masuk.menit*60)+(masuk.detik);
	int TotDetikKeluar = (keluar.jam*3600)+(keluar.menit*60)+(keluar.detik);
	int Jarakdetik = TotDetikKeluar - TotDetikmasuk;
	//konversi jarakdetik ke jam-menit-detik
	selisih.jam = Jarakdetik / 3600;
	int sisa = Jarakdetik % 3600;
	selisih.menit = sisa / 60;
	selisih.detik = sisa % 60;
	
	//memasukan Hail input
	cout<<"No. POL	: "<<nopol<<endl;
	cout<<"MASUK	: "<<masuk.jam<<":"<<masuk.menit<<":"<<masuk.detik<<endl;
	cout<<"KELUAR	: "<<keluar.jam<<":"<<keluar.menit<<":"<<keluar.detik<<endl;
	cout<<"=======================================" <<endl;
	
	//menghitng tarif parkir
	int biayaparkir;
	if(selisih.jam < 2)
		biayaparkir = 1000;
	else if(selisih.jam <= 3)
		biayaparkir = 2000;
	else if(selisih.jam < 6)
		biayaparkir = 3000;
	else
		biayaparkir = 4000;
	
	cout<<"No. POL		: "<<nopol<<endl;
	cout<<"PARKIR SELAMA	: "<<selisih.jam<<":"<<selisih.menit<<":"<<selisih.detik<<endl;
	cout<<"TARIF PARKIR	: Rp."<<biayaparkir<<",-"<<endl;
	cout<<"======================================="<<endl;
	cout<<"		TERIMAKASIH"<<endl;
	cout<<"	          SUDAH BERKUNJUNG"<<endl;
	cout<<endl<<endl;
	char kembali;
	cout<<"Transaksi Kembali ?(y/t) : "; cin>>kembali;
	while((kembali == 'y')||(kembali == 'Y')){
	goto Mulai;
	}
}