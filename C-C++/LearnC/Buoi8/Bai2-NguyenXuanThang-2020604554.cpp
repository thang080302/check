#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n,float &x){
	do{
		cout<<"Nhap so nguyen duong n: ";
		cin>>n;
	} 
	while(n <= 0);
	cout << "Nhap so thuc x : ";
	cin >> x;
}
int F(int n,float x)
{
	return 2*x*x + n*x +n;	
}
int main(){
	int n;
	float x,y;
	nhap(n,x);
	cout << "Nhap so thuc y : ";
	cin >> y;
	cout << "Gia tri bieu thuc P : " << F(x,n) + F(y,n) - F(x+y,n) << endl;
	return 0;
}
