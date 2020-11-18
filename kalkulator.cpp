#include <iostream>

using namespace std;

int main()
{
    int angka_1,angka_2,input,hasil;
    char mad;
    do {
    cout << "Kalkulator Sederhana" << endl;
    cout << "Arry Wiandana" << endl;
    cout << "================" << endl;
    cout << "1. Penjumlahan " << endl;
    cout << "2. Pengurangan " << endl;
    cout << "3. Perkalian " << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Exit" << endl;
    cout << "Masukan Pilihan anda : " <<endl;
    cin>>input;
    switch (input) {
      case 1 :
        cout<<'\n'<<"Penjumlahan"<<endl;
        cout<<'\n'<<"Masukan angka pertama : " <<endl;
        cin>>angka_1;
        cout<<'\n'<<"Masukan angka ke dua : " <<endl;
        cin>>angka_2;
        hasil=angka_1 + angka_2;
        cout<<"Hasil nya adalah : "<<hasil<<endl;
        cout<<"Mau berhitung lagi ? Y/N ";
        cin>>mad;
        break;

      case 2 :
        cout<<'\n'<<"Pengurangan"<<endl;
        cout<<'\n'<<"Masukan angka pertama : " <<endl;
        cin>>angka_1;
        cout<<'\n'<<"Masukan angka ke dua : " <<endl;
        cin>>angka_2;
        hasil=angka_1 - angka_2;
        cout<<"Hasil nya adalah : "<<hasil<<endl;
        cout<<"Mau berhitung lagi ? Y/N ";
        cin>>mad;
        break;

      case 3 :
        cout<<'\n'<<"Perkalian"<<endl;
        cout<<'\n'<<"Masukan angka pertama : " <<endl;
        cin>>angka_1;
        cout<<'\n'<<"Masukan angka ke dua : " <<endl;
        cin>>angka_2;
        hasil=angka_1 * angka_2;
        cout<<"Hasil nya adalah : "<<hasil<<endl;
        cout<<"Mau berhitung lagi ? Y/N ";
        cin>>mad;
        break;

      case 4 :
        cout<<'\n'<<"Pembagian"<<endl;
        cout<<'\n'<<"Masukan angka pertama : " <<endl;
        cin>>angka_1;
        cout<<'\n'<<"Masukan angka ke dua : " <<endl;
        cin>>angka_2;
        hasil=angka_1 / angka_2;
        cout<<"Hasil nya adalah : "<<hasil<<endl;
        cout<<"Mau berhitung lagi ? Y/N ";
        cin>>mad;
        break;
        default:
        cout<<"kode yang anda masukan tidak ada";
     }
    } while (mad/= 'Y');
     cout<<"Thank you ";
}
