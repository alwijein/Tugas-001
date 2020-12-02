#include <iostream>
#include <cstdlib>
#include <cstring>
#include <bits/stdc++.h>

using namespace std;

string crhomosome [15];
int hasil[5];

int konversiDes(int bin)
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
	 return hasil;
}

void substring(int x){


	string subSub[5];

	int a = 0;

	for(int i = 0; i < 5; i++){
		subSub[i] = crhomosome[x].substr(a,4);
		a = a + 4;
	}

	int atoiX[5];
	
	for(int i = 0; i < 5; i++){
    	atoiX[i] = atoi(subSub[i].c_str());
	}

	for(int i = 0; i < 5; i++){
		hasil[i] = konversiDes(atoiX[i]);
	}

	for(int i = 0; i < 5; i++){
		cout<<hasil[i];
	}
    cout<<endl;
}

int main(){
    string mataKuliah [11] = {"web","jarkom","struktur data","basis data I","basis data II",
                             "microcontroler","microprocessor","Pengantar Pemrograman","Pemrograman Terstruktur","APL",
                             "SPK"};
    string dosen[11] = {"dosen1","dosen2","dosen3","dosen4","dosen5","dosen6","dosen7","dosen8","dosen9","dosen10","dosen11"};
    string kelas[11] = {"A1","A2","A3","A4","A5","A6","A7","A8","A9","B1","B2",};
    string waktu[11] = {
        "senin, 07:40-09:20","senin, 13:00-14:40","senin, 14:40-16:20",
        "selasa, 07:40-09:20","selasa, 13:00-14:40","selasa, 14:40-16:20",
        "rabu, 07:40-09:20","rabu, 13:00-14:40","rabu, 14:40-16:20",
        "kamis, 07:40-09:20","kamis, 13:00-14:40"};
	string ruangan[11] = {
        "labrpl","labjarkom","labdasar","labindustri","labmultimedia",
        "labriset","labrplbaru","ruanglab","labjaringanbaru","labfikom","labrobotika"
        };
        
	int n = 0;
	char condition;
	do{	
		cout<<"input: ";
		cin>>crhomosome[n]; 
		cout<<"Y/N: ";
		cin>>condition;	
		n++;
	}while(condition!='n');

    string cari;
    cout<<"Masukkan Cari: ";
    cin>>cari;
    
    for (int i = 0; i < 15; i++){
     if (cari == crhomosome[i]){
         substring(i);
        cout<<"Kelas    : "<<kelas[hasil[2]]<<endl;         
        cout<<"Waktu    : "<<waktu[hasil[4]]<<endl;         
        cout<<"Matkul   : "<<mataKuliah[hasil[0]]<<endl;         
        cout<<"Dosen    : "<<dosen[hasil[1]]<<endl;         
        cout<<"Ruangan  : "<<ruangan[hasil[3]]<<endl;         
     }
    } 
}
