#include <iostream>
#include <cstdlib>
#include <cstring>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

string crhomosome [15];

string convertInt(int number){
    stringstream ss;
    ss << number;
    return ss.str();
}

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

    int des=0;

	string subSub[4];
	int a = 0;

	for(int i = 0; i < 5; i++){
		subSub[i] = crhomosome[x].substr(a,4);
		a = a + 4;
	}

	int atoiX[4];
	
	for(int i = 0; i < 5; i++){
    	atoiX[i] = atoi(subSub[i].c_str());
	}
	
	int hasilX[4];

	for(int i = 0; i < 5; i++){
		hasilX[i] = konversiDes(atoiX[i]);
	}

	for(int i = 0; i < 5; i++){
		cout<<hasilX[i];
	}

	


    
    
 


    // while(char_array[i]!=0)
    // {    if(char_array[i]=='0'||char_array[i]=='1')
    //     {
    //         des=des*2+char_array[i]-48;
    //     }i++;
    // }
    
    // cout<<des;
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
	
	int n = 0;
	char condition;
	do{	
		cout<<"input: ";
		cin>>crhomosome[n]; 
		cout<<"Y/N: ";
		cin>>condition;	
		n++;
	}while(condition!='n');

    int x = 0;
    substring(x);
    
}
