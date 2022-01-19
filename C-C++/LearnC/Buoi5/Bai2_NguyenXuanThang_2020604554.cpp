#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n) {
	do {
		cout << "Nhap n = ";
		cin >> n;
	}
	while(n<1 || n>40);
}

void NhapMang(int* a, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "Nhap a[" << i << "]: ";
		cin >> *(a + i);
	}
}

void XuatMang(int* a, int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << "\t"<< *(a + i) ;
	}
	cout<<endl;
}
void Test_1(int* a, int n)
{
	cout << "cac phan tu chan chia het cho 3 : \n";
	for(int i = 0; i < n; i++)
	{
		if(a[i]%6 == 0) {
			cout << a[i] << " tai vi tri "<<i+1<<"\n";
		}
	}
}
void Swap(int x,int y) {
	int temp = x;
	y=x;
	y=temp;
}
void Sort(int* a, int n) {
	for(int i = 0;i<n;i++)
	{
		for(int j = i+1;j<n;j++) 
		{
			if(a[i]>a[j]) Swap(a[i],a[j]);
		}
	}
}
void chen(int *a,int &n,int x,int k)
{
	for(int i = n-1;i>=k-1;i--) {
		*(a+i+1) = *(a+i);
	}
	*(a+k-1) = x;
	n++;
}
void Chen_arr(int *a,int &n) {
	int x;
	cout << "Nhap so nguyen x : ";
	cin >> x;
	for(int i = 0;i<n;i++)
	{
		if(a[i]%2==0) 
		{
			chen(a,n,x,i);
			i++;
		}
	}
	
}
	
	
int main() {
	int *a = new int [100];
	int n;
	nhap(n);
	NhapMang(a,n);
	cout << "Mang vua nhap : " ;
	XuatMang(a,n);
	Sort(a,n);
	cout << "Mang vua sap xep : ";
	XuatMang(a,n);
	Chen_arr(a,n) ;
	cout << "Mang vua chen : " ;
	XuatMang(a,n) ;
	return 0;
}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
