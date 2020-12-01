#include <iostream>

using namespace std;

int main(){
	string mataKuliah [5] = {"web","jarkom","st","bd","pti"};
	
	int n = 0;
	string crhomosome [100];
	char condition;
	do{	
		cout<<"input: ";
		cin>>crhomosome[n]; 
		cout<<"Y/N: ";
		cin>>condition;	
		n++;
	}while(condition!='n');
	
	string sub = crhomosome[0].substr(3,3);
	
	cout<<sub;
	
//	for (int i = 0; i < n; i++){
//		cout<<crhomosome[i]<<endl;
//		
//	}
	
	
return 0;

}
