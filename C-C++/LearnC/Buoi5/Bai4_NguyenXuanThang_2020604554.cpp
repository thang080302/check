#include<iostream>
#include<math.h>
using namespace std;
void Nhap(int &m,int &n) {
	cout << "Nhap m : ";
	cin >> m;
	cout << "Nhap n : ";
	cin >> n;
}
void Nhap_Ma_Tran(int a[][20],int m,int n) {
	for(int i = 0;i<m;i++) 
	{
		for(int j = 0;j<n;j++) 
		{
			cout << "a["<<i<<"]["<<j<<"] = ";
			cin >> a[i][j];
		}
	}
}
void Show_Ma_Tran(int a[][20],int m,int n) {
	for(int i = 0;i<m;i++) 
	{
		for(int j = 0;j<n;j++) 
		{
			cout <<" "<< a[i][j];
		}
		cout << endl;
	}
}
void Max_Ma_Tran(int a[][20],int m,int n) {
	int max = a[0][0];
	for(int i = 0;i<m;i++) 
	{
		for(int j = 0;j<n;j++) 
		{
			if(a[i][j]>max) max = a[i][j];
		}
	}
	cout << "Max = " << max << endl;
}
void Swap(int x,int y) {
	int temp = x;
	y=x;
	y=temp;
}
void Swap_Row(int a[][20],int m,int n) {
	int hang1;
	int hang2;
	do {
		cout << "Nhap hang can doi : ";
		cin >> hang1;
	}
	while(hang1 < 0 || hang1 > m);
	do {
		cout << "Nhap hang can doi : ";
		cin >> hang2;
	}
	while(hang2 < 0 || hang2 > m || hang2 == hang1);
	for(int j = 0;j<n;j++) 
	{
		Swap(a[hang1][j],a[hang2][j]);
	}
}
int main() {
	int m,n;
	int a[20][20];
	Nhap(m,n);
	Nhap_Ma_Tran(a,m,n);
	Show_Ma_Tran(a,m,n);
	Max_Ma_Tran(a,m,n);
	Swap_Row(a,m,n);
	return 0;
}
			
