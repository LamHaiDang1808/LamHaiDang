#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int n, a, b, c;
	int dem = 0, s=0;
	cout << "Nhap vao so n: ";
	cin >> n;
	a = n;
	b = n;
	do
	{
		a = a / 10;
		dem = dem + 1;
	}while(a > 0);
	do
	{
		c = b % 10;
	      s = s + pow(c,dem);
		b = b / 10;
	}while(b > 0);
	if(s == n){
	cout << "La so armstrong!";
	}
	else{
	cout << "Khong phai la so armstrong!";
	}
	return 0;
} 
