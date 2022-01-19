#include<iostream>
#include<fstream>

using namespace std;

void nhapMang(float* a,int n)
{
	for(int i = 0;i < n;i++)
	{
		cout<<"Nhap d[" << i << "]: ";
		cin>> *(a + i);
	}
}

void xuatMang(float* a,int n)
{
	for(int i = 0;i < n;i++)
	{
		cout<<"\t"<< *(a+i);
	}
	cout<<endl;
}

void xuat_file(float *a,int n)
{
	ofstream bt;
	bt.open("BT3.txt");
	bt << "Mang vua nhap : ";
	for(int i=0;i<n;i++){
		bt<<a[i]<<" ";
	}
	bt << endl;
	bt << endl;
	int tong = 0;
	for(int i =5;i<=10;i++) {
		tong += i;
	}
	bt << "tong tu 5 den 10 : " << tong << endl;
	bt.close();
}
void ktra(float *a,int n) 
{
	int count = 0;
	for(int i=0;i<n;i++){
		if(*(a+i) > 6) count++;
	}
	if(count == n) cout << "\nMang hop le ! ";
	else cout << "\nMang khong hop le ! ";
}
void xoa_PT(float *a,int &n,int k){
	for(int i=k;i<n;i++){
		*(a + i) = *(a + i + 1);
	}
	n--;
} 
void xoa(float *a,int &n) 
{
	float x;
	cout << "Nhap phan tu can xoa : ";
	cin >> x;
	for(int i= 0;i<n;i++)
	{
		if(*(a+i) == x) 
		{
			xoa_PT(a,n,i);
			i--;
		}
	}
	xuatMang(a,n);
}
int main()
{
	int n;
	cout<<"Nhap so  luong phan tu: ";
	cin>>n;
	float *a=new float[n];
	nhapMang(a,n);
	xuatMang(a,n);
	xuat_file(a,n);
	ktra(a,n);
	xoa(a,n);
	delete[]a;
	return 0;
}
