#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;


int main()
{
   int sisa, hasil, a;
    hasil = 0;
    int bin = 100;
    int pangkat = 0;
    while (bin >= 1)
    {
        cout<<"bin: "<<bin<<endl;
        sisa = bin % 2;
        cout<<"sisa: "<<sisa<<endl;
        hasil += sisa * pow(2, pangkat);
        cout<<"hasil: "<<hasil<<endl;
        bin = bin / 10;
        cout<<"bin: "<<bin<<endl;
        cout<<"pangkat: "<<pangkat<<endl;
        pangkat++;
        
    }
    cout<<hasil;
}