#include <iostream>
#include<math.h>
using namespace std;
void nhap(int a[],int &n) {
	cout << "Nhap n = ";
	cin >> n;
	cout << "Nhap mang : \n";
	for(int i = 0;i<n;i++) {
		cout << "a["<<i<<"] = ";
		cin >> a[i];
	}
}
void xuat(int a[],int n) {
	for(int i = 0;i<n;i++) {
		cout << a[i] << " ";
	}
}
bool Ngto(int x) {
	if(x<2) return false;
	for(int i = 2;i<sqrt(x);i++) {
		if(x%i==0) return false;
	}
	return true;
}
void count(int a[],int n,int dem) {
	dem = 0;
	int sum = 0;
	cout << "Cac so nguyen to : ";
	for(int i = 0;i<n;i++) {
		if(Ngto(a[i])==true) {
			cout << a[i];
			dem++;
			sum+= a[i];
		}
	}
	cout << "\n So lan xuat hien : " << dem;
	cout <<"\n Tong : " << sum << endl;
}
int main() {
	int a[100];
	int n;
	int dem;
	nhap(a,n);
	xuat(a,n);
	count(a,n,dem);
	return 0;
}
