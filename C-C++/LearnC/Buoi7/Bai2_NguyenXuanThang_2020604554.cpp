#include<iostream>
#include<fstream>

using namespace std;

void nhapMang(int* a,int n)
{
	for(int i = 0;i < n;i++)
	{
		cout<<"Nhap d[" << i << "]: \n";
		cin>> *(a + i);
	}
}

void xuatMang(int* a,int n)
{
	for(int i = 0;i < n;i++)
	{
		cout<<"\t"<< *(a+i);
	}
	cout<<endl;
}

void xuat_file(int *a,int n)
{
	ofstream bt;
	bt.open("BT2.dat");
	bt << "Mang vua nhap : ";
	for(int i=0;i<n;i++){
		bt<<a[i]<<" ";
	}
	bt << endl;
	bt.close();
}
void Tinh(int *a,int n)
{
	ofstream bt;
	bt.open("BT2.dat");
	int tong = 0;
	for(int i = 0;i<n;i++)
	{
		if(*(a+i) > 0 && *(a+i) % 3 == 0) tong += *(a+i);
	}
	bt << "Tong cac so duong chia het cho 3 : " << tong << endl;
	bt.close();
} 
void chen(int *a,int &n,int x,int k)
{
	n++;
	for(int i = n-i;i>k;i--)
	{
		*(a+i+1) = *(a+i);
	}
	*(a+k+1) = x;
}
void chen_am (int *a,int &n)
{
	int x;
	cout << "Nhap x : ";
	cin >> x;
	for(int i = 0;i<n;i++)
	{
		if(*(a+i) < 0) chen(a,n,x,i);
	}
	for(int i = 0;i < n;i++)
	{
		cout<<"\t"<< *(a+i);
	}
	cout<<endl;
}
int main(){
	int n;
	do{
		cout<<"Nhap so  luong phan tu: ";
		cin>>n;
	}
	while(n < 1 || n > 30);
	int *a=new int[n];
	nhapMang(a,n);
	xuatMang(a,n);
	xuat_file(a,n);
	Tinh(a,n);
	chen_am(a,n);
	delete[]a;
	return 0;
}
