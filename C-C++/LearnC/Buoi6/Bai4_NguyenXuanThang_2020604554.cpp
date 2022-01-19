#include<math.h>
#include<iostream>
#include<string.h>
using namespace std;
bool KtraNgto(int x) 
{
	if(x<2) return false;
	int count = 0;
	for(int i = 2; i <= sqrt(x); i++)
	{
		if(x%i == 0) count++;
	}
	if(count !=0) return false;
	return true;
}
    
void Nhap_Mang(int *arr,int &n)
{
	cout << "Nhap so phan tu : ";
	cin >> n;
	cout << "Nhap mang : \n";
	for(int i = 0;i<n;i++) 
	{
		cout <<"Nhap a["<< i << "] = ";
		cin >> *(arr+i);
	}
}
void Xuat_Mang(int *arr,int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << *(arr + i) << " ";
	}
	cout<<endl;
}
void Tim_Kiem(int *arr,int n,float &x)
{
	cout << "Nhap so thuc x : ";
	cin >> x;
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		if(*(arr+i) == x)
		{
			count++;
			cout << i+1 << " ";
		}
	}
	cout << "\nSo lan xuat hien : " << count <<endl;
}
void Mang_NT(int *arr,int *b,int n,int &m)
{
	b = new int[m];
	m=0;
	for(int i=0;i<n;i++){
	    if(KtraNgto(*(arr + i)) == true){
	    	*(b + m) = *(arr + i);
	    	m++;
		}
	}
	cout<<"Mang b: ";
	Xuat_Mang(b,m);
	delete[] b;
}
void chen(int *arr,int &n)
{
	int pos;
	int k;
	cout << "Nhap so k : ";
	cin >> k;
	cout << "Nhap vi tri chen : ";
	cin >> pos;
	
	for(int i = n;i>=pos-1;i--)
	{
		*(arr+i) = *(arr+i-1);
	}
	*(arr+pos-1) = k;
	n++;
	Xuat_Mang(arr,n);
}
int main() {
	int n ,m;
	float x;
	int *arr = new int[n];
	int *b = new int[m];
	Nhap_Mang(arr,n);
	cout << "Mang vua nhap : ";
	Xuat_Mang(arr,n);
	Tim_Kiem(arr,n,x);
	Mang_NT(arr,b,n,m);
	chen(arr,n);
	return 0;
}























	
