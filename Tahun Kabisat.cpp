#include <iostream>
using namespace std;

int main (){
	
	int tahun;
	cout<<"Masukkan Tahun: ";
	cin>>tahun;
	
	if (tahun%400==0 || tahun%100!=0 ){
		if(tahun%4==0){
			cout<<"Adalah Tahun Kabisat";
			
		} else {
			cout<<"Bukan Tahun Kabisat";
		}			
	}else{
		cout<<"Bukan Tahun Kabisat";
	}
}
