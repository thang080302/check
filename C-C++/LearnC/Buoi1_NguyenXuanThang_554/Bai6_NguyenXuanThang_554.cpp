#include<iostream>
#include<math.h>
#include<iomanip>
#include <unistd.h>
using namespace std;
void HCN() 
{
	int a , b;
	do {
		cout << "Nhap chieu dai va rong hcn";
		cin >> a >> b;
		if(a <= 0 || b <= 0) cout <<"Nhap lai :" << endl;
	}
	while(a <= 0 || b <= 0);
	cout << "Chu vi hcn = " << (a+b) * 2 << endl;
	cout << "Dien tich hcn = " << a*b << endl;
}
void TG() 
{
	int a , b , c;
	do {
		cout << "Nhap 3 canh tam giac : ";
		cin >> a >> b >> c;
		if(a <= 0 || b <= 0 || c <= 0) cout <<"Nhap lai :" << endl;
	}
	while(a <= 0 || b <= 0 || c <= 0);
	cout << "Chu vi tam giac = " << (a + b + c) << endl;
	float p = (float)(a+b+c)/2;
	cout << "Dien tich hcn = " << sqrt(p * (p-a) * (p-b) * (p-c)) << endl;
}
void HT() 
{
	int a ;
	do {
		cout << "Nhap ban kinh";
		cin >> a ;
		if(a <= 0 ) cout <<"Nhap lai :" << endl;
	}
	while(a <= 0 );
	cout << "Dien tich htron = " << 2*3.14159*a << endl;
}
int main() {
	int n;
	cout << "Nhap lua chon : ";
	cin >> n;
	switch (n) {
		case 1 : 
		{
			HCN();
			break;
		}
		case 2 :
		{
			TG() ;
			break;
		}
		case 3 : 
		{
			HT();
			break;
		}
		case 4 :
		{
			cout << "Thoat chuong trinh !";
			sleep(3);
			return 0;
		
		}
	}
	return 0;
}
			
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
