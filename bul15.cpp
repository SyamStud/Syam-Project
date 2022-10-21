#include <iostream>
using namespace std;

char iom;
int penghasilan;
int tanggungan;
int ratarata;
char organisasi;
float ipk;
char prestasi;

int main(int argc, char const *argv[])
{
    //Konfirmasi Pembayaran IOM
    cout << "Apakah Anda Sudah Membayar IOM ? ";
    cin >> iom;
    
    if (iom == 'Y'){

        //Jumlah Penghasilan
        cout << "Masukkan Jumlah Penghasilan Orang Tua  = ";
        cin >> penghasilan;

        if (penghasilan < 1000000)
        cout << "Penghasilan Anda Kurang dari 1 Juta" << endl;

        else if (penghasilan >= 1000000 && penghasilan < 1500000)
        cout << "Penghasilan Anda Lebih dari 1 Juta dan Kurang dari 1.5 Juta" << endl;

        else if (penghasilan > 1500000 && penghasilan < 2000000)
        cout << "Penghasilan Anda Lebih dari 1.5 Juta dan Kurang dari 2 Juta" << endl;

        else 
        cout << "Penghasilan Anda Lebih dari 2 Juta" << endl;

        //Jumlah Tanggungan
        cout << "Masukkan Jumlah Tanggungan = ";
        cin >> tanggungan;
        ratarata = penghasilan/tanggungan;

        if (ratarata >= 750000){
        cout << "Anda Tidak Lolos Seleksi IOM" << endl;
        return 0;}

        else {
        //Organisasi
        cout << "Apakah Anda Mengikuti Organisasi ? ";
        cin >> organisasi;
            
            if (organisasi == 'Y')
            cout << "Anda Mengikuti Organisasi" << endl;

            else
            cout << "Anda Tidak Mengikuti Organisasi" << endl;

        //IPK
        cout << "Masukkan IPK Anda = ";
        cin >> ipk;

            if (ipk < 2.75){
            cout << "Anda Tidak Lolos Seleksi IOM" << endl;
            return 0;}

            else if (ipk > 2.75 && ipk < 3.00) 
            cout << "IPK anda lebih dari 2.75 dan kurang dari 3.00" << endl;

            else 
            cout << "IPK anda lebih dari 3.00" << endl;
        
        //Prestasi
        cout << "Apakah Anda Memiliki Prestasi = ";
        cin >> prestasi;

            if (prestasi == 'Y')
            cout << "Anda Lolos Seleksi Beasiswa IOM" << endl;

            else 
            cout << "Anda Lolos Seleksi Beasiswa IOM Tanpa Prestasi" << endl;
        }
    }
    else
    cout<<"Tidak Lolos Belum Bayar IOM"<<endl;
    return 0;
}