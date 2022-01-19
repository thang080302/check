#include<iostream>
#include<math.h>
using namespace std;
void nhap(int &n) 
{
	do 
	{
		cout << "Nhap n = ";
		cin >> n;
	}
	while(n>200);
}
void Swap(int x,int y) {
	int temp = x;
	y=x;
	y=temp;
}
void Nhap_Diem(float* DTB,float* Mon_1,float* Mon_2,float* Mon_3,int n) 
{
	for(int i = 0;i<n;i++) 
	{
		cout << "\t\tNhap diem hoc sinh "<<i+1<<" : \n";
		cout <<"Mon 1 : ";
		cin >> Mon_1[i]; 
		cout <<"Mon 2 : ";
		cin >> Mon_2[i]; 
		cout <<"Mon 3 : ";
		cin >> Mon_3[i]; 
		DTB[i] = (float)(Mon_1[i]+Mon_2[i]+Mon_3[i])/3;
	}
}
void Show(float* DTB,float* Mon_1,float* Mon_2,float* Mon_3,int n) 
{
	for(int i = 0;i<n;i++) 
	{
		cout << "\tHoc sinh "<<i+1<<" : \n";
		cout <<" "<<Mon_1[i];
		cout <<" "<<Mon_2[i];
		cout <<" "<<Mon_3[i];
		cout << "\n\t DTB = " << DTB[i];
	}
}
void Show_DTB_MAX (float *DTB,int n) {
	int max = DTB[0];
	for(int i = 0;i<n;i++)
	{
		if(DTB[i] >= max) 
		{
			max = DTB[i];
		}
	}
	for(int i = 0;i<n;i++)
	{
		if(DTB[i] == max) cout << "Hoc sinh : " << i+1;
	}
	cout << "\nDTB cao nhat : "<<max;
}
void TinhDTb(float* Mon_1,float* Mon_2,float* Mon_3,int n)
{
	float tong_1,tong_2,tong_3;
	for(int i = 0;i<n;i++)
	{
		tong_1 += Mon_1[i];
		tong_2 += Mon_2[i];
		tong_3 += Mon_3[i];
	}
	cout << "\nDTB mon 1 : "<<(float)tong_1/n;
	cout << "\nDTB mon 2 : "<<(float)tong_2/n;
	cout << "\nDTB mon 3 : "<<(float)tong_3/n;
	cout << "\nDTB chung : " <<(float)((float)tong_1/n + (float)tong_2/n + (float)tong_3/n) / 3;
}
void Sort(float* DTB,int n) 
{
	for(int i = 0;i<n;i++) 
	{
		for(int j= i+1;j<n;j++) 
		{
			if(DTB[i] < DTB[j]) Swap(DTB[i],DTB[j]);	
		}
	}
	cout << "Da sap xep";
}
int Menu(float* DTB,float* Mon_1,float* Mon_2,float* Mon_3,int n) 
{
	cout <<"\n================== Menu ===================\n";
	cout <<"1.Hien thi danh sach diem\n";
	cout <<"2.DTB cao nhat\n";
	cout <<"3.DTB trung binh\n";
	cout <<"4.Sap xep dtb giam dan\n";
	cout <<"0.Thoat chuong trinh\n";
	cout <<"====================//=====================\n";
	int chon;
	cout << "Nhap lua chon : ";
	cin >> chon;
	switch(chon)
	{
		case 1 :
		{
			system("cls");
			Show(DTB,Mon_1,Mon_2,Mon_3,n);
			return Menu(DTB,Mon_1,Mon_2,Mon_3,n);
			break;
		}
		case 2 :
		{
			system("cls");
			Show_DTB_MAX(DTB,n);
			return Menu(DTB,Mon_1,Mon_2,Mon_3,n);
			break;
		}
		case 3 :
		{
			system("cls");
			TinhDTb(Mon_1,Mon_2,Mon_3,n);
			return Menu(DTB,Mon_1,Mon_2,Mon_3,n);
			break;
		}
		case 4 :
		{
			system("cls");
			Sort(DTB,n);
			return Menu(DTB,Mon_1,Mon_2,Mon_3,n);
			break;
		}
		case 0 :
		{
			system("pause");
			return 0;
			break;
		}
	}
}
int main() {
	int n;
	float *Mon_1 = new float[200];
	float *Mon_2 = new float[200];
	float *Mon_3 = new float[200];
	float *DTB = new float[200];
	nhap(n);
	Nhap_Diem(DTB,Mon_1,Mon_2,Mon_3,n);
	Menu(DTB,Mon_1,Mon_2,Mon_3,n);
}









	
