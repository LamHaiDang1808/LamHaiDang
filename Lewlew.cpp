#include <iostream>
using namespace std;
int main(){
	int t, dongia=0;
	cout<<"So KW dien: ";
	cin>>t;
	if(t>=0 && t<=100){
		dongia = t * 2000;
		cout<<"Tien dien la: "<<dongia<<endl;
	}
	else if(t>=101 && t<=200){
		dongia = 100*2000 + (t-100) * 2500;
		cout<<"Tien dien la: "<<dongia<<endl;
	}
	else if(t>=201 && t<=300){
		dongia = 100*2000 + 200*2500 + (t-200) * 3000;
		cout<<"Tien dien la: "<<dongia<<endl;
	}
	else if(t>300){
		dongia = 100*2000 + 200*2500 + 300*3000 + (t-300) * 5000;
		cout<<"Tien dien la: "<<dongia<<endl;	
	}
}
