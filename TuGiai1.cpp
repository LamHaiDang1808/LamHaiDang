#include<iostream.h>
#include <cmath>
using namespace std;
int main()
{
	float a,b,c;
	float p,s;
	cout<<"Nhap canh a: ";
	cin>>a;
	cout<<"Nhap canh b: ";
	cin>>b;
	cout<<"Nhap canh c: ";
	cin>>c;
	p=(a+b+c)/2.0;
	s=sqrt(p*(p-a)*(p-b)*(p-c));
	cout<<"Dien tich tam giac 3 canh a, b, c la: "<<s<<endl;
	return 0;
	}
