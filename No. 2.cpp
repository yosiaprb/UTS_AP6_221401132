#include <iostream>
#include <string>

using namespace std;

int main() {
    string barang1, barang2, barang3;
    int banyak1, banyak2, banyak3, jumlah1, jumlah2, jumlah3;
    int total, disc;
    int minyak=16000, gula=15000, beras=18000;
    
    cout<<"============================="<<endl<<endl;
    cout<<"   Program Kasir Sederhana   "<<endl<<endl;
    cout<<"============================="<<endl;
    cout<<"   Daftar Barang dan Harga   "<<endl;
    cout<<"1. 1 kg Minyak  = Rp16.000,00"<<endl;
    cout<<"2. 1 kg Gula    = Rp15.000,00"<<endl;
    cout<<"3. 1 kg Beras   = Rp18.000,00"<<endl;
    cout<<"============================="<<endl<<endl;
    
    cout<<"Masukkan nama barang sesuai dengan urutan daftar barang di atas"<<endl;
    cout<<"Nama barang 1     : ";
    cin>>barang1;
    cout<<"Banyak barang @kg : ";
    cin>>banyak1;
    jumlah1=banyak1*minyak;
    cout<<"Harga barang      : Rp"<<jumlah1<<endl<<endl;
    
    cout<<"Nama barang 2     : ";
    cin>>barang2;
    cout<<"Banyak barang @kg : ";
    cin>>banyak2;
    jumlah2=banyak2*gula;
    cout<<"Harga barang      : Rp"<<jumlah2<<endl<<endl;
    
    cout<<"Nama barang 3     : ";
    cin>>barang3;
    cout<<"Banyak barang @kg : ";
    cin>>banyak3;
    jumlah3=banyak3*beras;
    cout<<"Harga barang      : Rp"<<jumlah3<<endl<<endl;
    
    total=jumlah1+jumlah2+jumlah3; //total semua pembelian
    
    cout<<"Total Pembelian = Rp"<<total<<endl;
    
    if (total>100000) {
        disc=0.1*total;  //mendapatkan diskon jika total pembelian lebih dari 100000
    } else {
        disc=0;
    }
    
    cout<<"Discount    = Rp"<<disc<<endl<<endl;  //diskon yang didapatkan
    cout<<"Total Bayar = Rp"<<total-disc<<endl<<endl;  //total bayar dikurangi dari diskon
    cout<<"Terima kasih atas kunjungan Anda!";
    
    return 0;
}