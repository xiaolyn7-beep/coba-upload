#include <iostream>
using namespace std;

void inputData(int &harga, int &jumlah, float &diskon,float &pajak){
	cout << "|=== Input Data Barang ===|" << endl;
	cout << "Masukkan Harga Barang : ";
	cin >> harga;
	cout << "Masukkan Jumlah Barang : ";
	cin >> jumlah;
	cout << "Masukkan Diskon Barang (%) : ";
	cin >> diskon;
	cout << "Masukkan Pajak Barang (%) : ";
	cin >> pajak;
}

void lihatData(int harga, int jumlah, float diskon, float pajak){
	float total = harga * jumlah;
	float totalDiskon = total * (diskon/100); 
	float totalPajak = total * (pajak/100);
	float totalAkhir = total - totalDiskon + totalPajak;
	cout << "|=== Cetak Data Barang ===|" << endl;
	cout << "Total Sebelum Diskon dan pajak : Rp." << total << endl;
	cout << "Jumlah Diskon : Rp." << totalDiskon << endl;
	cout << "Jumlah Pajak : Rp." << totalPajak << endl;
	cout << "Total Pembayaran Akhir : Rp." << totalAkhir << endl;
	
}
int main(){
	int pilih, harga, jumlah;
	float diskon, pajak;
	char kembali;
	bool data = 0;
	do{
		cout << "|==== Menu Kasir ====|" << endl;
		cout << "1. Input Data Barang" << endl;
		cout << "2. Cetak Data Barang" << endl;
		cout << "Pilih Menu : ";
		cin >> pilih;
		switch (pilih){
			case 1:
			system ("cls");
			inputData(harga, jumlah, diskon, pajak);
			data = 1;
			break;
			
			case 2:
			if(data){
				system ("cls");
				lihatData(harga, jumlah, diskon, pajak);
			}
			else
				cout << "Anda belum menginput data, input data terlebih dahulu!!!" << endl;
			break;
			
			default:
			cout << "Input Menu Tidak Valid, Input ulang!!!" << endl;
			
		}
		cout << endl;
		cout << "Apakah Anda ingin kembali ke menu? (Y/N) : ";
		cin >> kembali;
		system ("cls");
	}
	while (kembali == 'y' || kembali == 'Y');
	system ("cls");
	cout << "Terimakasih";
		
}
