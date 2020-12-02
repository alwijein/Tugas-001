#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

void konversiDes(int bin)
{
    int sisa, hasil, a;
    hasil = 0;
    int pangkat = 0;
    while (bin >= 1)
    {
        sisa = bin % 2;
        hasil += sisa * pow(2, pangkat);
        bin = bin / 10;
        pangkat++;
    }
    cout << hasil << endl;
}

int main()
{
    int bin, des;
    int pil;
menu:
    cout << ":: MENU ::";
    cout << " Biner Ke Desimal";

    cout << "\n\n:: Biner Ke  Desimal ::";
    cout << "\nInput                   = ";
    cin >> bin;
    cout << "Hasil Konversi    = ";
    konversiDes(bin);
}