#include <iostream>
#include<math.h>
using namespace std;
void nhap(float a[],int n) {
	for(int i = 0;i<n;i++) {
		cout << "a["<<i<<"] = ";
		cin >> a[i];
	}
}
void xuat(float a[],int n) {
	for(int i = 0;i<n;i++) {
		cout << a[i] << " ";
	}
}
void absolute(float a[],int n) {
	int max = abs(a[0]);
	int vtri;
	for(int i = 1;i<n;i++) {
		if(abs(a[i])>max) {
			max = abs(a[i]);
			vtri = i+1;
		}
	}
	cout << "\n max = " << max << endl;
	if(vtri!=0) cout << " Tai vi tri : "<< vtri;
	else cout << "\n Tai vi tri 1";
}
void chen(float a[],int &n,float x,int k) {
	for(int i = n-1;i>=k-1;i--) {
		a[i+1] = a[i];
	}
	a[k-1] = x;
	n++;
}
	
int main() {
	int n;
	float x;
	int k;
	float a[100];
	do {
		cout << "Nhap n : ";
		cin >> n;
	}
	while(n<=2 || n>=30);
	cout << "Nhap mang : \n";
	nhap(a,n);
	cout << "Mang vua nhap : ";
	xuat(a,n);
	absolute(a,n);
	cout << "\n Nhap so thuc x : ";cin >> x;
	cout << "Nhap vi tri k : ";cin >> k;
	chen(a,n,x,k);
	xuat(a,n);
	return 0;
}
	
	
