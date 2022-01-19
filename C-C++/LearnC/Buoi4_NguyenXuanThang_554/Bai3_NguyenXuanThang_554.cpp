#include <iostream>
using namespace std;
void xuat(int a[],int n) {
	for(int i = 0;i<n;i++) {
		cout << a[i] << " ";
	}
}
void ktra(int a[],int n,int &x) {
	int dem = 0;
	cout << "Nhap x : "; cin >> x;
	cout << "phan tu nho hon x xuat hien tai vi tri : ";
	for(int j = 0;j<n;j++) {
		if(a[j] < x) {
			dem ++;
			cout << j+1 << " ";
		}
	}
	cout << endl << "so lan xuat hien : " << dem ;
}
int main()
{
	int a[100];
	int i=0;
	int count = 0;
	while (count < 100)
	{
		cout << "a["<<i<<"]: ";
		cin >> a[i];
		if(a[i] == -1) break;
		count++;
		i++;
	}
	cout << "Mang vua nhap la : ";
	xuat(a,count);
	cout << endl;
	int x;
	ktra(a,count,x);

	return 0;
}
	
