#include <iostream>
#include <string>
using namespace std;

int main()
{
    float beban;
    string satuan;
    float hasilKG;
    float hasilLBS;

    cout << "Selamat datang di program pengkonversian satuan berat Kg dan Lbs" << endl;
    // pengguna memasukkan nilai yang ingin dikonversi
    cout << "Silahkan masukan nilai yang ingin dikonversikan" << endl;
    cin >> beban;

    // selanjutnya pengguna akan mendeklarasikan apakah nilai yang tadi dalam satuan Kg atau Lbs
    cout << "Ini dalam satuan apa? (Mohon ketik antara \"Kg\" atau \"Lbs\")" << endl;
    cin >> satuan;

    if (satuan == "Kg")
    {
        // Jika pengguna memasukkan "Kg" maka nilai berat yang tadi dimasukkan akan dikonversi menjadi Lbs
        hasilLBS = beban * 2.20462;
        cout << "Inilah nilai nya dalam satuan Lbs: " << hasilLBS << endl;
    }
    else if (satuan == "Lbs")
    {
        // Jika pengguna memasukan "Lbs" maka nilai berat yang tadi dimasukkan akan dikonversi menjadi Kg
        hasilKG = beban / 2.20462;
        cout << "Inilah nilai nya dalam satuan Kg: " << hasilKG << endl;
    }
    else
    {
        // Jika ditulis selain "Kg" dan "Lbs" maka akan muncul output ini
        cout << "Satuan yang Anda masukkan tidak valid." << endl;
    }

    return 0;
}
