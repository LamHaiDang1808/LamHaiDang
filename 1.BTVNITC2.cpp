#include <iostream>
using namespace std;
int main(){
	int n, s=1;
	cout<<"Nhap n: ";
	cin>>n;
	for(int i=2; i<=2*n; i=i+2){
		s= s * i;
	}
	cout<<"Tich p= "<<s<<endl;
}
