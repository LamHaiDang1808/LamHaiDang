#include <iostream>
using namespace std;
int main(){
	int t;
	do{
	cout<<"Nhap vao mot thu trong tuan: ";
		cin>>t;
		if(t<0 || t>8){
			cout<<"Nhap lai thu: ";
		}
		}
	while(t<0 || t>8);
	if(t==1){
		cout<<"Sunday";
	}
	else if(t==2){
		cout<<"Monday";
	}
	else if(t==3){
		cout<<"Tuesday";
	}
	else if(t==4){
		cout<<"Wednesday";
	}
	else if(t==5){
		cout<<"Thusday";
	}
	else if(t==6){
		cout<<"Friday";
	}
	else{
		cout<<"Saturday";
	}
}

	
